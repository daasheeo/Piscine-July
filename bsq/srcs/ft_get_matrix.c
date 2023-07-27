/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:17:03 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 12:40:42 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

int	**initialize_matrix(t_map *map)
{
	int	**matrix;
	int	i;

	matrix = (int **)malloc(map->height * sizeof(int *));
	if (!matrix)
		return (NULL);
	i = -1;
	while (++i < map->height)
	{
		matrix[i] = (int *)malloc(map->width * sizeof(int));
		if (!matrix[i])
		{
			release_matrix_allocation(matrix, i);
			return (NULL);
		}
	}
	return (matrix);
}

int	**get_matrix(t_map *map)
{
	int			**matrix;
	int			i;
	int			j;
	t_p_node	*tmp;

	matrix = initialize_matrix(map);
	if (!matrix)
		return (NULL);
	i = -1;
	while (++i < map->height)
	{
		j = -1;
		while (++j < map->width)
			matrix[i][j] = EMPTY;
	}
	tmp = map->obstacles;
	while (tmp)
	{
		matrix[tmp->point.x][tmp->point.y] = OBSTACLE;
		tmp = tmp->next;
	}
	return (matrix);
}
