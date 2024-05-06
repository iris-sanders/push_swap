/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:37:45 by irsander          #+#    #+#             */
/*   Updated: 2024/05/06 16:49:23 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
rrr : rra and rrb at the same time.

SWAP
PUSH
ROTATE
REVERSE ROTATE
*/

bool	swap(t_list **list_head)
{
	t_list	*first_node;
	t_list	*second_node;

	if (!(*list_head) || !(*list_head)->next)
		return (false);
	first_node = *list_head;
	second_node = (*list_head)->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	(*list_head) = second_node;
	return (true);
}

bool	push(t_list **head_list_a, t_list **head_list_b)
{
	t_list	*og_second_node_a;

	if (!(*head_list_a))
		return (false);
	og_second_node_a = (*head_list_a)->next;
	(*head_list_a)->next = (*head_list_b);
	(*head_list_b) = (*head_list_a);
	(*head_list_a) = og_second_node_a;
	return (true);
}

bool	rotate(t_list **list_head)
{
	t_list	*first_node;
	t_list	*last_node;

	first_node = *list_head;
	last_node = *list_head;
	while (last_node->next)
		last_node = last_node->next;
	*list_head = (*list_head)->next;
	first_node->next = NULL;
	last_node->next = first_node;
	return (true);
}

bool	reverse_rotate(t_list **list_head)
{
	t_list	*last_node;
	t_list	*node_before_last_node;

	if (!(*list_head) || !(*list_head)->next)
		return (false);
	last_node = *list_head;
	while (last_node->next)
		last_node = last_node->next;
	node_before_last_node = *list_head;
	while (node_before_last_node->next->next)
		node_before_last_node = node_before_last_node->next;
	last_node->next = *list_head;
	node_before_last_node->next = NULL;
	*list_head = last_node;
	return(true);
}