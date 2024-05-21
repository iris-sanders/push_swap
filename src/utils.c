/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:37:02 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 12:17:50 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mem_error(char **array)
{
	free_2d_array(array);
	ft_error("Failed to allocate memory");
}

int		count_array(char **array_2d) //ft_strlen
{
	int y;

	y = 0;
	while(array_2d[y])
		y++;
	return (y);
}

char	**strdup_2d_array(char **temp_array)
{
	char	**array;
	int		y;

	y = count_array(temp_array);
	array = malloc((y + 1) * sizeof(char *));
	if (!array)
		ft_error("failed to allocate memory");
	array[y] = NULL;
	y--;
	while (y >= 0)
	{
		array[y] = ft_strdup(temp_array[y]);
		if (!array[y])
		{
			free_2d_array(array);
			ft_error("failed to allocate memory for string copy");
		}
		y--;
	}
	return (array);
}

void	free_2d_array(char **array)
{
	int	y;

	y = 0;
	while (array[y] != NULL)
	{
		free(array[y]);
		y++;
	}
	free(array);
}

void	ft_error(char *msg)
{
	ft_putstr_fd("Error: ", STDERR_FILENO);
	ft_putstr_fd(msg, STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}