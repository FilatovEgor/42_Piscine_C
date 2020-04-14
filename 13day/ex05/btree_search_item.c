/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 20:32:54 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/13 20:53:53 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,\
		int (*cmpf)(void *, void *))
{
	if (!root || !data_ref)
		return (0);
	if (root->left)
		return (btree_search_item(root->left, data_ref, cmpf));
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->right)
		return (btree_search_item(root->right, data_ref, cmpf));
	return (0);
}
