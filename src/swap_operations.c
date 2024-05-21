/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:37:45 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 15:16:15 by irsander         ###   ########.fr       */
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

void	swap(t_list **list_head)
{
	t_list	*first_node;
	t_list	*second_node;

	first_node = *list_head;
	second_node = (*list_head)->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	(*list_head) = second_node;
}

void	swap_a(t_list **list_head_a)
{
	swap(list_head_a);
	ft_printf("sa\n");
}

void	swap_b(t_list **list_head_b)
{
	swap(list_head_b);
	ft_printf("sb\n");
}

void	swap_a_and_b(t_list **list_head_a, t_list **list_head_b)
{
	swap(list_head_a);
	swap(list_head_b);
	ft_printf("ss\n");
}





