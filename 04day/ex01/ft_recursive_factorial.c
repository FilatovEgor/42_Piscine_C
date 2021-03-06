/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:30:35 by tcarlena          #+#    #+#             */
/*   Updated: 2020/02/29 18:48:01 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb < 0) || nb > 12)
	{
		return (0);
	}
	if ((nb == 1) || (nb == 0))
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
