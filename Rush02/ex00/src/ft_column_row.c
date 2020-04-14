/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_column_row.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:32:48 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 16:33:49 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		ft_column(t_char *start)
{
	int i;

	i = 0;
	while (start->character != '\n' && start->character != '\0')
	{
		i++;
		start = start->next;
	}
	return (i);
}

int		ft_row(t_char *start)
{
	int i;
	int row;

	i = 0;
	row = 0;
	while (start->next)
	{
		if (start->character == '\n' || start->character == '\0')
			row++;
		start = start->next;
	}
	return (row);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}
