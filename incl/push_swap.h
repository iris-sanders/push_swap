/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:09:51 by irsander          #+#    #+#             */
/*   Updated: 2024/05/06 16:49:57 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include "ft_printf.h"
#include "stdbool.h"
#include "limits.h"

typedef struct s_list {
	int				num;
	struct s_list	*next;
} t_list;

//list_utils.c
void	print_list(t_list *head);

//list.c
void	ft_lstadd_back(t_list **head, t_list *new);
t_list	*add_nodes_to_list_back(char **array_2d, t_list *head_a, int num);
t_list	*ft_lstnew(int num);
t_list	*create_first_node(char **array_2d, t_list *head, int num);
t_list	*array2d_to_linked_list(char **array_2d);

//operations.c
bool	swap(t_list **list_head);
bool	push(t_list **head_list_a, t_list **head_list_b);
bool	rotate(t_list **list_head);
bool	reverse_rotate(t_list **list_head);

//parser_utils.c
bool	min_max_int_check(long long number);
bool	atoi_int_limit_check(char *str);

//parser.c
bool	no_duplicates(char **array);
bool	integer_limit(char *s);
bool	is_number(char *s);
void	input_is_valid(char **array);

//utils.c
void	mem_error(char **array);
int		count_array(char **array_2d);
char	**strdup_2d_array(char **temp_array);
void	free_list(t_list *head);
void	free_2d_array(char **array);
void	ft_error(char *msg);

#endif

//steps
//1. Make functions for operations, make functions that stores the operations done in char ** 
//2. write multiple sorting algorithms that sort stack a, using the operations and stack b 
//   received as a t_list * and return a ll (operations in a ll) t_list *operations:
/*
	[
		"sa" , *next
		"pb", *next
	]
*/

//later. count number of operations done by every algorithm put in struct.
// result_of_algos[4]
// make one struct t_ops: t_ops results[3]
//set last result result[2] = 0

/* result_of_algos1 = 
	{
		t_list *operations;
		int amount_of_ops;
	}
*/
/* result_of_algos2 = 
	{
		t_list *operations;
		int amount_of_ops;
	}
*/
/* result_of_algos3 = 
	{
		t_list *operations;
		int amount_of_ops;
	}
*/