/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:38:29 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/03 14:59:50 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index_first;
	int index_second;

	index_first = 0;
	index_second = 0;
	while (str[index_first])
	{
		while (str[index_first + index_second] == to_find[index_second])
		{
			index_second += 1;
		}
		if (!to_find[index_second])
		{
			return (&str[index_first]);
		}
		index_second = 0;
		index_first += 1;
	}
	return (0);
}
