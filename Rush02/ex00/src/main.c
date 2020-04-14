/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:13:26 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 16:16:23 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

int		main(void)
{
	t_char	*list_char;
	t_char	*start;
	char	**compare;
	int		*result;

	list_char = ft_create_elem();
	start = list_char;
	while (read(0, &list_char->character, 1))
	{
		list_char->next = ft_create_elem();
		list_char = list_char->next;
	}
	compare = ft_colles(ft_column(start), ft_row(start));
	result = ft_compare(compare, start);
	ft_results(result, ft_column(start), ft_row(start));
	return (0);
}
