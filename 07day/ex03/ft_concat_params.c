/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:17:59 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/05 20:16:13 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	i = 1;
	j = 1;
	count = 0;
	while (i < argc)
	{
		while (argv[i][count])
			count++;
		count++;
		i++;
	}
	i = 1;
	str = (char*)malloc(sizeof(char) * (count + 1));
	while (i < argc)
	{
		str = ft_strcat(str, argv[i]);
		if (i != argc - 1)
			str = ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
