/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:07:45 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/05 15:12:28 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int*)malloc(sizeof(*arr) * (max - min));
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (i);
}
