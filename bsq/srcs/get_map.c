/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:34:57 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 14:24:59 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

t_p_node	*get_obstacles(char **strs, t_map *map)
{
	t_p_node	*list;
	t_point		point;
	int			i;
	int			j;

	list = NULL;
	list = (t_p_node *)malloc(sizeof(t_p_node));
	if (!list)
		return (NULL);
	i = 0;
	while (++i < map->height + 1)
	{
		j = -1;
		while (++j < map->width)
		{
			if (strs[i][j] == map->characters[OBSTACLE])
			{
				point = create_point(i - 1, j);
				list = insert_linked_node_at_the_beginning(point, &list);
			}
		}
	}
	list = delete_last_node(&list);
	return (list);
}

t_map	*get_map(char *str)
{
	t_map		*map;
	char		**strs;
	int			width;
	t_p_node	*obstacles;

	strs = ft_split(str, "\n");
	if (!strs)
		return (NULL);
	width = ft_strlen(strs[1]);
	map = initialize_map(strs[0], width);
	if (!map)
	{
		release_map_allocation(map);
		return (NULL);
	}
	obstacles = get_obstacles(strs, map);
	map->obstacles = obstacles;
	return (map);
}
