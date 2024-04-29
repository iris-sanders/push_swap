/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:09:51 by irsander          #+#    #+#             */
/*   Updated: 2024/04/29 19:02:18 by irsander         ###   ########.fr       */
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

//parser_utils.c
bool	min_max_int_check(long long number);
bool	atoi_int_limit_check(char *str);

//parser.c
bool	no_duplicates(char **array);
bool	integer_limit(char *s);
bool	is_number(char *s);
void	input_is_valid(char **array);

//utils.c
void	free_2d_array(char **array);
void	ft_error(char *msg);

#endif