/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:55:35 by irsander          #+#    #+#             */
/*   Updated: 2024/05/06 17:26:28 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **head_list_a, t_list **head_list_b)
{
	t_list	*og_second_node_a;

	og_second_node_a = (*head_list_a)->next;
	(*head_list_a)->next = (*head_list_b);
	(*head_list_b) = (*head_list_a);
	(*head_list_a) = og_second_node_a;
}

char	*push_b(t_list **head_list_a, t_list **head_list_b)
{
	push(head_list_a, head_list_b);
	return("pb");
}

char	*push_a(t_list **head_list_b, t_list **head_list_a)
{
	push(head_list_b, head_list_a);
	return("pa");
}