/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:03:25 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 13:29:19 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

int	calculate_filesize(int file)
{
	int		size;
	char	buffer[1];

	size = 0;
	while (read(file, buffer, sizeof(buffer)) == 1)
		size++;
	return (size);
}

char	*get_str(char *filepath, int file_size)
{
	char	buffer[1];
	int		i;
	char	*str;
	int		file;

	file = open(filepath, O_RDONLY);
	if (file == -1)
		return (NULL);
	str = (char *)malloc((file_size + 1) * sizeof(char));
	if (!str)
	{
		close(file);
		return (NULL);
	}
	i = -1;
	while (++i < file_size && read(file, buffer, sizeof(buffer)) > 0)
		str[i] = buffer[0];
	close(file);
	if (i < file_size)
	{
		free(str);
		return (NULL);
	}
	str[i] = '\0';
	return (str);
}

t_map	*read_map(char *filepath)
{
	int		file;
	int		size;
	char	*str;
	t_map	*map;

	file = open(filepath, O_RDONLY);
	if (file == -1)
		return (NULL);
	size = calculate_filesize(file);
	close(file);
	file = open(filepath, O_RDONLY);
	if (file == -1)
	{
		release_strings_allocation(&str, size);
		return (NULL);
	}
	str = get_str(filepath, size);
	if (!str)
		return (NULL);
	map = get_map(str);
	free(str);
	if (!map)
		return (NULL);
	map->matrix = get_matrix(map);
	return (map);
}
