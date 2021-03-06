/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:08:20 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/03 22:11:50 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && 'Z' >= str[i]) || \
					(str[i] >= 'a' && 'z' >= str[i])))
			return (0);
		i++;
	}
	return (1);
}
