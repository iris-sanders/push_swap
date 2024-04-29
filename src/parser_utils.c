/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:33:07 by irsander          #+#    #+#             */
/*   Updated: 2024/04/29 18:36:22 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	min_max_int_check(long long number)
{
	if (number > INT_MAX)
		return (true);
	else if (number < INT_MIN)
		return (true);
	return (false);
}

bool	atoi_int_limit_check(char *str)
{
	int			i;
	int			neg_number;
	long long	number;

	i = 0;
	neg_number = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13)
		|| (str[i] == 32))
			i++;
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i +1] >= '0' && str[i +1] <= '9'))
	{
		if (str[i] == '-')
			neg_number = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (min_max_int_check(number * neg_number) == true)
		return (false);
	return (true);
}