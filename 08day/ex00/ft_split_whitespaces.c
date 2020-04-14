/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:52:30 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/06 14:07:47 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wordcount(char *str)
{
	int		index;
	int		word_count;

	index = 0;
	word_count = 0;
	while (str[index])
	{
		if (str[index] != '\t' && str[index] != ' ' && str[index] != '\n')
			word_count++;
		while (str[index + 1] && str[index] != '\t' && str[index] != ' '\
				&& str[index] != '\n')
			index++;
		index++;
	}
	return (word_count);
}

int		ft_wordlen(char *str)
{
	int		index;
	int		word_len;

	index = 0;
	word_len = 0;
	while (str[index] == '\t' || str[index] == ' ' || str[index] == '\n')
		index++;
	while (str[index++] && str[index] != '\t' && str[index] != ' '\
			&& str[index] != '\n')
		word_len++;
	return (word_len);
}

char	**ft_split_whitespaces(char *str)
{
	int		index;
	int		i;
	int		letter;
	char	**word_list;

	index = 0;
	i = 0;
	if (!str || !(word_list = (char **)malloc(sizeof(char*) *\
					(ft_wordcount(str) + 1))))
		return (NULL);
	while (index < ft_wordcount(str))
	{
		if (!(word_list[index] = (char *)malloc(sizeof(char) *\
						(ft_wordlen(&str[i] + 1)))))
			return (NULL);
		letter = 0;
		while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			i++;
		while (str[i] && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
			word_list[index][letter++] = str[i++];
		word_list[index][letter] = '\0';
		index++;
	}
	word_list[index] = NULL;
	return (word_list);
}
