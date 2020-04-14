/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 16:27:07 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/08 16:46:44 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		is_valid_char(char c)
{
	if (c == '.')
		return (1);
	else if ((c >= '1') && (c <= '9'))
		return (1);
	return (0);
}

int		column_available(char c, int y, char tab[9][9])
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][y] == c)
			return (0);
		i++;
	}
	return (1);
}

int		row_available(char c, int x, char tab[9][9])
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[x][i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		box_available(char c, int x, int y, char tab[9][9])
{
	int x_end;
	int y_end;
	int tmp;

	x = (x / 3) * 3;
	x_end = x + 3;
	y = (y / 3) * 3;
	y_end = y + 3;
	tmp = y;
	while (x < x_end)
	{
		y = tmp;
		while (y < y_end)
		{
			if (tab[x][y] == c)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int		is_available(char c, int x, int y, char tab[9][9])
{
	if ((column_available(c, y, tab)) != 1)
		return (0);
	if ((row_available(c, x, tab)) != 1)
		return (0);
	if ((box_available(c, x, y, tab)) != 1)
		return (0);
	return (1);
}
