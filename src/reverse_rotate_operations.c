/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:09:44 by irsander          #+#    #+#             */
/*   Updated: 2024/05/06 17:38:22 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **list_head)
{
	t_list	*last_node;
	t_list	*node_before_last_node;

	last_node = *list_head;
	while (last_node->next)
		last_node = last_node->next;
	node_before_last_node = *list_head;
	while (node_before_last_node->next->next)
		node_before_last_node = node_before_last_node->next;
	last_node->next = *list_head;
	node_before_last_node->next = NULL;
	*list_head = last_node;
}

char	*reverse_rotate_a(t_list **list_head_a)
{
	reverse_rotate(list_head_a);
	return("rra");
}

char	*reverse_rotate_b(t_list **list_head_b)
{
	reverse_rotate(list_head_b);
	return("rrb");
}

char	*reverse_rotate_a_and_b(t_list **list_head_a, t_list **list_head_b)
{
	reverse_rotate(list_head_a);
	reverse_rotate(list_head_b);
	return("rrr");
}