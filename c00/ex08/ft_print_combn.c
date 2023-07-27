/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:17:14 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/06 20:01:57 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_util(int array[], int index, int digit, int n)
{
	int		i;

	if (index == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(array[i] + '0');
			i++;
		}
		if (array[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}	
	if (digit > 9)
		return ;
	array[index] = digit;
	ft_print_comb_util(array, index + 1, digit + 1, n);
	ft_print_comb_util(array, index, digit + 1, n);
}

void	ft_print_combn(int n)
{
	int	array[10];

	ft_print_comb_util (array, 0, 0, n);
}
