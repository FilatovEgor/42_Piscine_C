/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 14:51:53 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 14:54:28 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

int		do_op(int nbr1, int nbr2, char operat);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_parser(char **str);
int		ft_multi_div_mod(char **str);
int		ft_ad_sub(char **str);
char	*ft_rm_spaces(char *str);
int		eval_expr(char *str);
#endif
