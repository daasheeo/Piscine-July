/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:32:57 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/25 00:27:36 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int *) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}

/*int	main(void)
{
	int min;
	int max;
	int *tab;
	int i;
	int size;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/