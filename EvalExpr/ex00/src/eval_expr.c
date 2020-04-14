/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:05:08 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 15:30:51 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_parser(char **str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if ((*str)[0] == '-')
			sign = -1;
		*str += 1;
	}
	if ((*str)[0] == '(')
	{
		*str += 1;
		result = ft_ad_sub(str);
		if ((*str)[0] == ')')
			*str += 1;
		return (result * sign);
	}
	while ((*str)[0] >= '0' && (*str)[0] <= '9')
	{
		result = 10 * result + ((*str)[0] - '0');
		*str += 1;
	}
	return (result * sign);
}

int		ft_multi_div_mod(char **str)
{
	int		nbr1;
	int		nbr2;
	char	operat;

	nbr1 = ft_parser(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		operat = (*str)[0];
		*str += 1;
		nbr2 = ft_parser(str);
		nbr1 = do_op(nbr1, nbr2, operat);
	}
	return (nbr1);
}

int		ft_ad_sub(char **str)
{
	int		nbr1;
	int		nbr2;
	char	operat;

	nbr1 = ft_parser(str);
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		operat = (*str)[0];
		*str += 1;
		if (operat == '+' || operat == '-')
			nbr2 = ft_multi_div_mod(str);
		else
			nbr2 = ft_parser(str);
		nbr1 = do_op(nbr1, nbr2, operat);
	}
	return (nbr1);
}

char	*ft_rm_spaces(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j += 1;
		}
		i += 1;
	}
	str2[j] = '\0';
	return (str2);
}

int		eval_expr(char *str)
{
	str = ft_rm_spaces(str);
	if (str[0] == '\0')
		return (0);
	return (ft_ad_sub(&str));
}
