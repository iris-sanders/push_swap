/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:28:20 by irsander          #+#    #+#             */
/*   Updated: 2024/05/04 12:41:29 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


bool	no_duplicates(char **array)
{
	int	y;
	int	check;

	y = 0;
	while (array[y] != NULL)
	{
		check = y + 1;
		while (array[check] != NULL )
		{
			if (ft_atoi(array[y]) == ft_atoi(array[check]))
			{
				ft_printf("Duplicate arguments not allowed\n");
				return (false);
			}
			check++;
		}
		y++;
	}
	return (true);
	
}

bool	integer_limit(char *s)
{
	if (atoi_int_limit_check(s) == false)
	{
		ft_printf("Argument exceeds integer limit\n");
		return (false);
	}
	return (true);
}

bool	is_number(char *s)
{
	int	i;

	i = 0;
	if ((s[i] == '+' || s[i] == '-') && (s[i] != '\0'))
		i++;
	if (s[i] == '\0')
	{
		ft_printf("No arguments specified\n");
		return (false);
	}
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
		{
			ft_printf("Only digits (0-9) & spaces allowed\n");
			return (false);
		}
		i++;
	}
	return (true);
}

void	input_is_valid(char **array)
{
	int	y;

	y = 0;
	while (array[y] != NULL)
	{
		if (is_number(array[y]) == false || \
			integer_limit(array[y]) == false)
			ft_error("input invalid");
		y++;
	}
	if (no_duplicates(array) == false)
		ft_error("input invalid");
}
