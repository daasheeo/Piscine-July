/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:50:51 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/10 11:50:26 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_two_numbers(int first, int second)
{	
	ft_putchar((first / 10) + '0');
	ft_putchar((first % 10) + '0');
	ft_putchar(' ');
	ft_putchar((second / 10) + '0');
	ft_putchar((second % 10) + '0');
	if (first != 98 || second != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			print_two_numbers(first, second);
			second++;
		}
		first++;
	}
}
