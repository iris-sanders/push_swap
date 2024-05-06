/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:19:23 by irsander          #+#    #+#             */
/*   Updated: 2024/05/06 17:38:59 by irsander         ###   ########.fr       */
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



void	init(char **array_2d, t_list **list_a, t_list **list_b)
{
	input_is_valid(array_2d);
	*list_a = array2d_to_linked_list(array_2d);
	*list_b = NULL;
	free_2d_array(array_2d);
}


int main(int argc, char **argv) 
{
	char	**array_2d;
	t_list	*list_a;
	t_list	*list_b;

	if (argc < 2)
		ft_error("Not enough arguments:\n<./push_swap> <numbers to sort>"); //dont display anything and give the prompt back
	if (argc == 2)
		array_2d = ft_split(argv[1], ' ');
	else
		array_2d = strdup_2d_array(argv +1);
	if (!array_2d)
		mem_error(array_2d);
	init(array_2d, &list_a, &list_b);
	
	// //test swap:
	// ft_printf("list before:\n");
	// print_list(list_a);
	// ft_printf("\n");
	// swap(&list_a);
	// ft_printf("list after:\n");
	// print_list(list_a);
	// ft_printf("\n");

	// //test push:
	// ft_printf("list a before:\n");
	// print_list(list_a);
	// ft_printf("\n");
	// ft_printf("list b before:\n");
	// print_list(list_b);
	// ft_printf("\n");
	// push(&list_a, &list_b);
	// ft_printf("list a after:\n");
	// print_list(list_a);
	// ft_printf("\n");
	// ft_printf("list b after:\n");
	// print_list(list_b);

	// //test rotate:
	// ft_printf("list before:\n");
	// print_list(list_a);
	// ft_printf("\n");
	// rotate(&list_a);
	// ft_printf("list after:\n");
	// print_list(list_a);
	// ft_printf("\n");

	// //test reverse_rotate:
	// ft_printf("list before:\n");
	// print_list(list_a);
	// ft_printf("\n");
	// reverse_rotate(&list_a);
	// ft_printf("list after:\n");
	// print_list(list_a);
	// ft_printf("\n");


	

	// char** length is number of operations

	/* structs:
	operations = {
		t_list *ops;
		int length;
	}

	stack = {
		t_list *a;
		t_list *b;
	}
	*/

//1. sort the list
	
	free_list(list_a);

	// t_stack stack = {
	// 	list_a,
	// 	list_b
	// }
	// char * (*functions[3])(t_stack *input);

	// functions[0] = &fake_sort;
	// functions[1] = &fvery_ake_sort;
	// functions[2] = 0;	// NULL terminator
	// int i = 0;
	// // // Array to store results
	// t_ops results[3];
	// // // Null-terminator
	// // results[2] = 0;
	// // // Argv array
	// // // parse(argv);
	// // int arr[5] = {0, 6, 8, 7, 9};
	// // // Loop on algorithms and store return of function
	// while (functions[i])
	// {
	// 	t_stack *stack_copy = copy_stack_struct(stack)
	// 	results[i] = functions[i](stack_copy);
	// 	// free stack copy
	// 	i++;
	// }
	
	// // i = 0;
	// // // Find which result is shorter
	// // while (results[i])
	// // {
	// // 	results[i].length
	// // 	i++;
	// // }
	// // // Print shortest result
	
}

