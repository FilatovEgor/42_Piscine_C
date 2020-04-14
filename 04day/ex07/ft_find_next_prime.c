/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:59:17 by tcarlena          #+#    #+#             */
/*   Updated: 2020/02/29 22:10:18 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int div;

	div = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (div <= nb / div)
	{
		if (nb % div == 0)
		{
			return (0);
		}
		div++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb > 2147483647)
	{
		return (0);
	}
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
}
