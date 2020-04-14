/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 20:45:57 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/02 21:24:58 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;
	char			*destiny;

	len = 0;
	destiny = dest;
	while (len < n)
	{
		*dest = *src;
		src++;
		dest++;
		len++;
	}
	while (*dest)
	{
		dest++;
	}
	*dest = '\0';
	return (destiny);
}
