/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_bsq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:35:06 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 13:19:37 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

t_square	*initialize_square(int x, int y, int lenght)
{
	t_square	*square;

	square = (t_square *)malloc(sizeof(t_square));
	if (!square)
		return (NULL);
	square->lenght = lenght;
	square->point = create_point(x, y);
	return (square);
}

int	point_in_square(t_point point, t_square *square)
{
	return (square->point.x <= point.x
		&& point.x <= square->point.x + square->lenght
		&& square->point.y <= point.y
		&& point.y <= square->point.y + square->lenght);
}

int	square_is_valid(t_map *map, t_square *square)
{
	t_p_node	*tmp;

	if (square->point.x + square->lenght >= map->height
		|| square->point.y + square->lenght >= map->width)
		return (0);
	tmp = map->obstacles;
	while (tmp && !point_in_square(tmp->point, square))
		tmp = tmp->next;
	if (tmp)
		return (0);
	else
		return (1);
}

t_square	*get_bsq_in(int i, int j, t_map *map, t_square *bsq)
{
	t_square	*square;

	square = initialize_square(i, j, bsq->lenght + 1);
	if (!square)
		return (NULL);
	while (square_is_valid(map, square))
		square->lenght++;
	square->lenght--;
	if (square->lenght > bsq->lenght)
	{
		bsq->lenght = square->lenght;
		bsq->point = square->point;
	}
	free(square);
	return (bsq);
}

t_square	*get_bsq(t_map *map)
{
	t_square	*bsq;
	int			i;
	int			j;

	bsq = initialize_square(0, 0, 0);
	if (!bsq)
		return (NULL);
	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			bsq = get_bsq_in(i, j, map, bsq);
			j++;
		}
		i++;
	}
	return (bsq);
}
