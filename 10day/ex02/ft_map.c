/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:34:35 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/10 11:36:28 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new_arr;

	i = 0;
	new_arr = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		new_arr[i] = f(tab[i]);
		i++;
	}
	return (new_arr);
}
