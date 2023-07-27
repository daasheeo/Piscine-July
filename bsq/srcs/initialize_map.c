/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:18:33 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 14:08:02 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

int	check_characters_ok(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] < 32 || 126 < str[i])
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_map	*reserve_malloc_memory(t_map *map)
{
	map->characters = (char *)malloc(3 * sizeof(char));
	if (!map->characters)
	{
		free(map);
		return (NULL);
	}
	return (map);
}

char	*get_characters(char *str)
{
	char	*res;
	int		size;

	size = ft_strlen(str);
	res = (char *)malloc(3 * sizeof(char));
	res[EMPTY] = str[size - 3];
	res[OBSTACLE] = str[size - 2];
	res[FULL] = str[size - 1];
	if (!check_characters_ok(res))
		return (NULL);
	return (res);
}

t_map	*initialize_map(char *args, int width)
{
	t_map	*map;
	int		size;
	char	*str_nbr;
	int		number;

	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	size = ft_strlen(args);
	str_nbr = ft_strndup(args, size - 3);
	if (!str_nbr)
		return (NULL);
	number = ft_atoi(str_nbr);
	if (number < 0)
		return (NULL);
	map->height = number;
	map = reserve_malloc_memory(map);
	if (!map)
		return (NULL);
	map->characters = get_characters(args);
	map->width = width;
	map->obstacles = NULL;
	return (map);
}
