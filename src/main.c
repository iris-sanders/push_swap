/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:19:23 by irsander          #+#    #+#             */
/*   Updated: 2024/04/29 19:03:45 by irsander         ###   ########.fr       */
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






int main(int argc, char **argv) 
{
	char **array;

	if (argc < 2)
		ft_error("Not enough arguments:\n<./push_swap> <numbers to sort>"); //dont display anything and give the prompt back
	if (argc == 2)
	{
		array = ft_split(argv[1], ' ');
		if (!array)
			ft_error("Failed to split input");
		input_is_valid(array);
	}
	else
		input_is_valid(argv +1);
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
