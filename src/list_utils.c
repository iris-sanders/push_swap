/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:41:15 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 12:17:56 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *head)
{
	t_list	*node;

	node = head;
	while (node != NULL)
	{
		ft_printf("%i", node->num);
		node = node->next;
	}
}

int	node_count(t_list **head)
{
	int		count;
	t_list	*current;
	
	count = 0;
	current = *head;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}

int	find_max_presort(t_list **head_list_a)
{
	int		max_presort;
	t_list	*current;

	current = *head_list_a;
	max_presort = 0;
	while (current)
	{
		if (current->presort > max_presort)
			max_presort = current->presort;
		current = current->next;
	}
	return (max_presort);
}

void	free_list(t_list *head)
{
	t_list	*current;
	t_list	*next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}