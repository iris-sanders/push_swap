/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:37:45 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 17:42:06 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
