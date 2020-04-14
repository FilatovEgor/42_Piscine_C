/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_results.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:16:40 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 17:02:09 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

t_char	*ft_create_elem(void)
{
	t_char *list_char;

	list_char = malloc(sizeof(list_char));
	list_char->character = 0;
	list_char->next = NULL;
	return (list_char);
}

void	ft_print_list(t_char *list_start)
{
	while (list_start->next)
	{
		write(1, &list_start->character, 1);
		list_start = list_start->next;
	}
}

void	ft_results(int *result, int colunm, int row)
{
	int i;
	int flag_print;

	i = 0;
	flag_print = 0;
	while (i < 5)
	{
		if (result[i])
		{
			if (flag_print)
				ft_putstr(" || ");
			ft_putstr("[colle-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(colunm);
			ft_putstr("] [");
			ft_putnbr(row);
			ft_putstr("]");
			flag_print = 1;
		}
		i++;
	}
	if (!flag_print)
		ft_putstr("aucune");
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	unsigned	int n;
	char		c ;

	n = nb;
	c = n + '0';
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		write(1, &c,1);
}
