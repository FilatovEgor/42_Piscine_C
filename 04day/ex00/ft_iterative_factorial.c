/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 15:20:25 by tcarlena          #+#    #+#             */
/*   Updated: 2020/02/29 19:41:06 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factor_sum;

	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if ((nb == 1) || (nb == 0))
	{
		return (1);
	}
	factor_sum = 1;
	while (nb > 1)
	{
		factor_sum *= nb;
		nb--;
	}
	return (factor_sum);
}
