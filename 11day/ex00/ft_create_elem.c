/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:41:39 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/10 16:14:15 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*elem;

	if (!(elem = (malloc(sizeof(t_list)))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}
