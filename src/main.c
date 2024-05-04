/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:19:23 by irsander          #+#    #+#             */
/*   Updated: 2024/05/04 19:02:07 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// char *fake_sort(int *input)
// {
	
// 	return "sa\npb\n";
// }

// char *fvery_ake_sort(int *input)
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
	char **array_2d;
	t_list	*list_a;
	t_list	*list_b;

	if (argc < 2)
		ft_error("Not enough arguments:\n<./push_swap> <numbers to sort>"); //dont display anything and give the prompt back
	if (argc == 2)
	{
		array_2d = ft_split(argv[1], ' ');
		if (!array_2d)
			mem_error(array_2d);
		init(array_2d, &list_a, &list_b);
	}
	else 
	{
		array_2d = strdup_2d_array(argv +1);
		if (!array_2d)
			mem_error(array_2d);
		init(array_2d, &list_a, &list_b);
	}
	print_list(list_a);
	free_list(list_a);

	// char * (*algos[3])(int *input);

	// algos[0] = &fake_sort;
	// algos[1] = &fvery_ake_sort;
	// algos[2] = 0;

	// int i = 0;
	// // Array to store results
	// char *results[3];
	// // Null-terminator
	// results[2] = 0;
	// // Argv array
	// // parse(argv);
	// int arr[5] = {0, 6, 8, 7, 9};
	// // Loop on algorithms and store return of function
	// while (algos[i])
	// {
	// 	results[i] = algos[i](arr);
	// 	i++;
	// }
	
	// i = 0;
	// // Find which result is shorter
	// while (results[i])
	// {
	// 	// count_lines(results[i]);
	// 	i++;
	// }
	// // Print shortest result
	
}

