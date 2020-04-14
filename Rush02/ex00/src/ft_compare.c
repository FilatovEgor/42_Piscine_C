/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:30:46 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 16:50:02 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	**ft_collections(void)
{
	char **tab;

	if (!(tab = (char **)malloc(sizeof(char *) * 5 * 5)))
		return (0);
	tab[0] = "o-o|oo";
	tab[1] = "/*\\*\\/";
	tab[2] = "ABABCC";
	tab[3] = "ABCBAC";
	tab[4] = "ABCBCA";
	return (tab);
}

char	**ft_colles(int column, int row)
{
	char	**colle;
	char	**param;
	int		i;

	i = 0;
	param = ft_collections();
	if (!(colle = (char **)malloc(sizeof(char *) * column * (row + 1))))
		return (0);
	while (i < 5)
	{
		colle[i] = rush(column, row, param[i]);
		i++;
	}
	colle[i] = 0;
	return (colle);
}

int		*ft_compare(char **compare, t_char *start)
{
	int *valid;
	int test_i;

	test_i = 0;
	if (!(valid = malloc(sizeof(int) * 5)))
		return (0);
	while (test_i < 5)
	{
		valid[test_i] = ft_listcmp(compare[test_i], start);
		test_i++;
	}
	return (valid);
}

int		ft_listcmp(char *str, t_char *list)
{
	while (list->next && *str != '\0')
	{
		if (list->character != *str++)
			return (0);
		list = list->next;
	}
	return (1);
}
