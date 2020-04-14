/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 17:37:25 by mondrew           #+#    #+#             */
/*   Updated: 2020/03/01 18:18:32 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ful_st(int x)
{
	ft_putchar('A');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar('B');
			x--;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
	return (0);
}

int		non_ful_st(int x)
{
	ft_putchar('B');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar(' ');
			x--;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
	return (0);
}

int		ful_st_last(int x)
{
	ft_putchar('C');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar('B');
			x--;
		}
		ft_putchar('A');
	}
	ft_putchar('\n');
	return (0);
}

int		rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ful_st(x);
		if (y > 1)
		{
			while (y > 2)
			{
				non_ful_st(x);
				y--;
			}
			ful_st_last(x);
			return (0);
		}
	}
	else
		return (0);
	return (0);
}
