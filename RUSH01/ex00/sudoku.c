/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:58:13 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/08 16:46:15 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		copy_matrix(char **av, char tab[9][9])
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		if (ft_strlen(av[i]) != 9)
			return (0);
		j = 0;
		while (j < 9)
		{
			if (!is_valid_char(av[i][j]))
				return (0);
			tab[i - 1][j] = av[i][j];
			j++;
		}
		i++;
	}
	return (1);
}

int		print_sudoku(char tab[9][9])
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &tab[i][j], 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int		compare_solutions(char tab1[9][9], char tab2[9][9])
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab1[i][j] != tab2[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		solve(char tab1[9][9], char tab2[9][9])
{
	if (recursion(tab1) != 1)
		return (write(1, "Error\n", 6));
	if (reverse_recursion(tab2) != 1)
		return (write(1, "Error\n", 6));
	if (compare_solutions(tab1, tab2) == 0)
		return (write(1, "Error\n", 6));
	return (print_sudoku(tab1));
}

int		main(int ac, char **av)
{
	char	tab1[9][9];
	char	tab2[9][9];

	if (ac != 10)
		return (write(1, "Error\n", 6));
	if ((copy_matrix(av, tab1)) != 1)
		return (write(1, "Error\n", 6));
	copy_matrix(av, tab2);
	return (solve(tab1, tab2));
}
