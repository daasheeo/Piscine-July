/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 09:39:52 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/25 00:27:47 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*ptr;
	int	i;

	i = 0;
	range = max - min;
	ptr = (int *)malloc(sizeof(int) * range);
	if (max <= min || ptr == NULL)
	{
		ptr = NULL;
		return (ptr);
	}
	while (min < max)
		ptr[i++] = min++;
	return (ptr);
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
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
