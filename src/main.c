/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:19:23 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 17:39:41 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// char *fake_sort(t_stack *input)
// {

// 	return "sa\npb\n";
// }

// char *fvery_ake_sort(t_stack *input)
// {
// 	return "flol";
// }

// int parse()
// {
// 	;
// }

bool	a_is_sorted(t_list **head_list_a)
{
	t_list	*current;

	current = *head_list_a;
	while (current && current->next)
	{
		if (current->num > current->next->num)
			return (false);
		else
			current = current->next;
	}
	return (true);
}

void	init(char **array_2d, t_list **list_a, t_list **list_b)
{
	if (!array_2d[0])
		ft_error("empty string");
	input_is_valid(array_2d);
	*list_a = array2d_to_linked_list(array_2d);
	*list_b = NULL;
	free_2d_array(array_2d);
}

int	main(int argc, char **argv)
{
	char	**array_2d;
	t_list	*list_a;
	t_list	*list_b;

	if (argc < 2)
		exit(EXIT_SUCCESS);
	if (argc == 2)
		array_2d = ft_split(argv[1], ' ');
	else
		array_2d = strdup_2d_array(argv +1);
	if (!array_2d)
		mem_error(array_2d);
	init(array_2d, &list_a, &list_b);
	index_presort(&list_a);
	sort(&list_a, &list_b);
	free_list(list_a);
}
