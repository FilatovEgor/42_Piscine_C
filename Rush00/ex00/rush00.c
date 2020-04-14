/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 17:37:25 by mondrew           #+#    #+#             */
/*   Updated: 2020/03/01 18:06:13 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ful_st(int x)
{
	ft_putchar('o');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
	return (0);
}

int		non_ful_st(int x)
{
	ft_putchar('|');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar(' ');
			x--;
		}
		ft_putchar('|');
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
			ful_st(x);
			return (0);
		}
	}
	else
		return (0);
	return (0);
}
