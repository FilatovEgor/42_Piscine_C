/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:47:13 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/02 18:16:17 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int index;
	int sign;

	result = 0;
	index = 0;
	sign = 1;
	while (str[index] == '\t' || str[index] == '\v' || str[index] == '\n' || \
			str[index] == '\r' || str[index] == '\f' || str[index] == ' ')
	{
		index += 1;
	}
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index++] == '-')
		{
			sign = -1;
		}
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = 10 * result + (str[index++] - '0');
	}
	return (result * sign);
}
