/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 17:07:47 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/03 17:29:34 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	if ((s1[i] - s2[i]) > 0)
	{
		return (1);
	}
	if ((s1[i] - s2[i]) < 0)
	{
		return (-1);
	}
	return (0);
}
