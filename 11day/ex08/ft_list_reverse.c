/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:38:59 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/11 17:21:39 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list *past;
	t_list *present;

	past = NULL;
	while (*begin_list)
	{
		present = *begin_list;
		*begin_list = present->next;
		present->next = past;
		past = present;
	}
	*begin_list = present;
}
