/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 14:55:21 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/15 14:56:33 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		do_op(int nbr1, int nbr2, char operat)
{
	if (operat == '+')
		return (nbr1 + nbr2);
	else if (operat == '-')
		return (nbr1 - nbr2);
	else if (operat == '/')
		return (nbr1 / nbr2);
	else if (operat == '*')
		return (nbr1 * nbr2);
	else if (operat == '%')
		return (nbr1 % nbr2);
	return (0);
}
