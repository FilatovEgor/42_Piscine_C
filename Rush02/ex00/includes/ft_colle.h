/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:35:28 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 16:45:32 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE_H
# define FT_COLLE_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct		s_char
{
	char			character;
	struct s_char	*next;
}					t_char;
void	ft_putstr(char *str);
int		ft_column(t_char *start);
int		ft_row(t_char *start);
int		ft_strlen(char *str);
char	**ft_collections(void);
char	**ft_colles(int column, int row);
int		*ft_compare(char **compare, t_char *start);
int		ft_listcmp(char *str, t_char *list);
char	*ft_drawcolle(int n, char a, char b, char c);
char	*rush(int x, int y, char *tab);
char	*ft_combine(char *top, char *middle, char *bottom, int row);
t_char	*ft_create_elem(void);
void	ft_print_list(t_char *list_start);
void	ft_results(int *result, int colunm, int row);
void	ft_putnbr(int nb);

#endif
