/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:56:09 by irsander          #+#    #+#             */
/*   Updated: 2024/05/04 19:00:49 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*cursor;

	if (!*head)
	{
		*head = new;
		return ;
	}
	cursor = *head;
	while (cursor->next)
		cursor = cursor->next;
	cursor->next = new;
}

t_list	*ft_lstnew(int num)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->num = num;
	node->next = NULL;
	return (node);
}

t_list	*create_first_node(char **array_2d, t_list *head_a, int num)
{
	head_a = ft_lstnew(num);
	if (!head_a)
		mem_error(array_2d);
	return (head_a);
}

t_list	*add_nodes_to_list_back(char **array_2d, t_list *head_a, int num)
{
	t_list	*next_node;

	next_node = ft_lstnew(num);
	if (!next_node)
	{
		free_list(head_a);
		mem_error(array_2d);
	}
	ft_lstadd_back(&head_a, next_node);
	return (next_node);
}

t_list	*array2d_to_linked_list(char **array_2d)
{
	int		y;
	int		num;
	t_list	*head_a;

	y = 0;
	while (array_2d[y])
	{
		num = ft_atoi(array_2d[y]);
		if (y == 0)
			head_a = create_first_node(array_2d, head_a, num);
		else
			add_nodes_to_list_back(array_2d, head_a, num);
		y++;
	}
	return(head_a);
}

