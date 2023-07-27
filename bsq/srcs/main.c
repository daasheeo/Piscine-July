/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:44:01 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 14:18:20 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

int	main(int argc, char **argv)
{
	int			i;
	t_map		*map;
	t_square	*bsq;

	if (argc < 2)
	{
		write(2, "Error número de args", 21);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		map = read_map(argv[i]);
		if (!map)
			write(2, "map error", 10);
		bsq = get_bsq(map);
		print_matrix(map, bsq);
		release_map_allocation(map);
		free(bsq);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
