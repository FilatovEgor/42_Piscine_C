/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawcolle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:19:14 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 16:51:04 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	*ft_drawcolle(int n, char a, char b, char c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!(str = malloc(sizeof(char) * n + 2)))
		return (0);
	str[j++] = a;
	if (n > 2)
		while (i++ < n - 2)
			str[j++] = b;
	if (n > 1)
		str[j++] = c;
	str[j++] = '\n';
	str[j] = '\0';
	return (str);
}

char	*rush(int x, int y, char *tab)
{
	int		i;
	char	*top;
	char	*middle;
	char	*bottom;

	i = 0;
	if (!(top = malloc(sizeof(char) * (y + 1))))
		return (0);
	if (!(middle = malloc(sizeof(char) * (x + 1) * (y + 1))))
		return (0);
	if (!(bottom = malloc(sizeof(char) * (y + 1))))
		return (0);
	if (x > 0)
	{
		if (y > 0)
			top = ft_drawcolle(x, tab[0], tab[1], tab[2]);
		if (y > 2)
			middle = ft_drawcolle(x, tab[3], ' ', tab[3]);
		if (y > 1)
			bottom = ft_drawcolle(x, tab[4], tab[1], tab[5]);
	}
	return (ft_combine(top, middle, bottom, y));
}

char	*ft_combine(char *top, char *middle, char *bottom, int row)
{
	int		len;
	char	*str;
	int		pos;
	int		y;

	pos = 0;
	len = ft_strlen(top);
	if (!(str = malloc(sizeof(char) * row * len + 1)))
		return (0);
	while (*top)
		str[pos++] = *top++;
	while (row > 2)
	{
		y = 0;
		while (middle[y])
			str[pos++] = middle[y++];
		row--;
	}
	while (*bottom)
		str[pos++] = *bottom++;
	str[pos] = '\0';
	return (str);
}
