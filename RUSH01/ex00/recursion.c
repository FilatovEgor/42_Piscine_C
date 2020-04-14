/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:45:41 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/08 16:46:30 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		next_position(int *x, int *y, char tab[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] == '.')
			{
				*x = i;
				*y = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		reverse_next_position(int *x, int *y, char tab[9][9])
{
	int i;
	int j;

	i = 8;
	while (i >= 0)
	{
		j = 8;
		while (j >= 0)
		{
			if (tab[i][j] == '.')
			{
				*x = i;
				*y = j;
				return (1);
			}
			j--;
		}
		i--;
	}
	return (0);
}

int		recursion(char tab[9][9])
{
	int		x;
	int		y;
	char	c;

	if (next_position(&x, &y, tab) == 0)
		return (1);
	c = '1';
	while (c <= '9')
	{
		if (is_available(c, x, y, tab))
		{
			tab[x][y] = c;
			if (recursion(tab) == 1)
				return (1);
			else
				tab[x][y] = '.';
		}
		c++;
	}
	return (0);
}

int		reverse_recursion(char tab[9][9])
{
	int		x;
	int		y;
	char	c;

	if (reverse_next_position(&x, &y, tab) == 0)
		return (1);
	c = '1';
	while (c <= '9')
	{
		if (is_available(c, x, y, tab))
		{
			tab[x][y] = c;
			if (reverse_recursion(tab) == 1)
				return (1);
			else
				tab[x][y] = '.';
		}
		c++;
	}
	return (0);
}
