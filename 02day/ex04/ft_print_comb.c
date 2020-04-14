/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 13:54:48 by tcarlena          #+#    #+#             */
/*   Updated: 2020/02/27 19:02:54 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_print_results(char number1, char number2, char number3)
{
	ft_putchar(number1);
	ft_putchar(number2);
	ft_putchar(number3);
	if (!(number1 >= '7' && number2 >= '8' && number3 >= '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb(void)
{
	char number1;
	char number2;
	char number3;

	number1 = '0';
	while (number1 <= 55)
	{
		number2 = number1 + 1;
		while (number2 <= 56)
		{
			number3 = number2 + 1;
			while (number3 <= 57)
			{
				ft_print_results(number1, number2, number3);
				number3++;
			}
			number2++;
		}
		number1++;
	}
}
