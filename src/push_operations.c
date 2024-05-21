/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:55:35 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 15:25:20 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **head_list_a, t_list **head_list_b)
{
	t_list	*og_second_node_a;

	if (*head_list_a)
	{
		og_second_node_a = (*head_list_a)->next;
		(*head_list_a)->next = (*head_list_b);
		(*head_list_b) = (*head_list_a);
		(*head_list_a) = og_second_node_a;
	}
}

void	push_b(t_list **head_list_a, t_list **head_list_b)
{
	push(head_list_a, head_list_b);
	ft_printf("pb\n");
}

void	push_a(t_list **head_list_b, t_list **head_list_a)
{
	push(head_list_b, head_list_a);
	ft_printf("pa\n");
}