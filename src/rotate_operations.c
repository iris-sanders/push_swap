/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:10:19 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 17:41:10 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **list_head)
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
}

void	rotate_a(t_list **list_head_a)
{
	rotate(list_head_a);
	ft_printf("ra\n");
}

void	rotate_b(t_list **list_head_b)
{
	rotate(list_head_b);
	ft_printf("rb\n");
}

void	rotate_a_and_b(t_list **list_head_a, t_list **list_head_b)
{
	rotate(list_head_a);
	rotate(list_head_b);
	ft_printf("rr\n");
}
