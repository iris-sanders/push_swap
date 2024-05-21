/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:09:51 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 15:17:56 by irsander         ###   ########.fr       */
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
	int				presort;
	struct s_list	*next;
} t_list;

//list_utils.c
void	print_list(t_list *head);
int		node_count(t_list **head);
int		find_max_presort(t_list **head_list_a);
void	free_list(t_list *head);

//list.c
void	ft_lstadd_back(t_list **head, t_list *new);
t_list	*add_nodes_to_list_back(char **array_2d, t_list *head_a, int num);
t_list	*ft_lstnew(int num);
t_list	*create_first_node(char **array_2d, t_list *head, int num);
t_list	*array2d_to_linked_list(char **array_2d);

//main.c
bool	a_is_sorted(t_list **head_list_a);
void	init(char **array_2d, t_list **list_a, t_list **list_b);

//parser_utils.c
bool	min_max_int_check(long long number);
bool	atoi_int_limit_check(char *str);

//parser.c
bool	no_duplicates(char **array);
bool	integer_limit(char *s);
bool	is_number(char *s);
void	input_is_valid(char **array);

//push_operations.c
void	push(t_list **head_list_a, t_list **head_list_b);
void	push_b(t_list **head_list_a, t_list **head_list_b);
void	push_a(t_list **head_list_b, t_list **head_list_a);

//reverse_rotate_operations.c
void	reverse_rotate(t_list **list_head);
void	reverse_rotate_a(t_list **list_head_a);
void	reverse_rotate_b(t_list **list_head_b);
void	reverse_rotate_a_and_b(t_list **list_head_a, t_list **list_head_b);

//rotate_operations.c
void	rotate(t_list **list_head);
void	rotate_a(t_list **list_head_a);
void	rotate_b(t_list **list_head_b);
void	rotate_a_and_b(t_list **list_head_a, t_list **list_head_b);

//sort.c
void    index_presort(t_list **head_list_a);
void    sort(t_list **head_list_a, t_list **head_list_b);
void    three_sort(t_list **head_list_a);
void    five_sort(t_list **head_list_a, t_list **head_list_b);
void    radix_sort(t_list **head_list_a, t_list **head_list_b);


//swap_operations.c
void	swap(t_list **list_head);
void	swap_a(t_list **list_head_a);
void	swap_b(t_list **list_head_b);
void	swap_a_and_b(t_list **list_head_a, t_list **list_head_b);

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