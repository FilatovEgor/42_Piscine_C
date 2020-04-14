/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:18:14 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/11 15:19:42 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *next_link;
	t_list *link;

	link = *begin_list;
	while (link)
	{
		next_link = link->next;
		free(link);
		link = next_link;
	}
	*begin_list = NULL;
}
