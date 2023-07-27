/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:45:12 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 14:18:34 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

void	release_strings_allocation(char **str, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(str[i++]);
	free(str);
}

void	release_matrix_allocation(int **matrix, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(matrix[i++]);
	free(matrix);
}

void	release_map_allocation(t_map *map)
{
	t_p_node	*current;
	t_p_node	*next;
	int			i;

	if (map->matrix != NULL)
	{
		i = 0;
		while (i < map->height)
			free(map->matrix[i++]);
		free(map->matrix);
		map->matrix = NULL;
	}
	current = map->obstacles;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	map->obstacles = NULL;
	if (map->characters != NULL)
	{
		free(map->characters);
		map->characters = NULL;
	}
}
