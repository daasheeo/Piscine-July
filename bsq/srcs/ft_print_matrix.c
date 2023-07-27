/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:41:06 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 12:57:29 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(t_map *map, t_square *bsq)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < map->height)
	{
		j = -1;
		while (++j < map->width)
		{
			if (point_in_square(create_point(i, j), bsq))
				c = map->characters[FULL];
			else
				c = map->characters[map->matrix[i][j]];
			ft_putchar(c);
		}
		ft_putchar('\n');
	}	
}
