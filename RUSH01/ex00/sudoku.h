/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 16:39:04 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/08 16:44:25 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>

int	is_valid_char(char c);
int	ft_strlen(char *s);
int	copy_matrix(char **av, char tab[9][9]);
int	column_available(char c, int y, char tab[9][9]);
int	row_available(char c, int x, char tab[9][9]);
int	box_available(char c, int x, int y, char tab[9][9]);
int	is_available(char c, int x, int y, char tab[9][9]);
int	print_sudoku(char tab[9][9]);
int	next_position(int *x, int *y, char tab[9][9]);
int	compare_solutions(char tab1[9][9], char tab2[9][9]);
int	recursion(char tab[9][9]);
int	reverse_next_position(int *x, int *y, char tab[9][9]);
int	reverse_recursion(char tab[9][9]);
int	solve(char tab1[9][9], char tab2[9][9]);
#endif
