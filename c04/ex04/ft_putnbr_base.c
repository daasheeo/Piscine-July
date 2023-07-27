/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:02:15 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/18 20:07:43 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr(int n, int base_value, char *symbols)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		ft_putchar('-');
	}
	if (n_long >= base_value)
		ft_print_nbr(n_long / base_value, base_value, symbols);
	ft_putchar(symbols[n_long % base_value]);
}

int	double_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (*(symbols + i))
	{
		j = i + 1;
		while (*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return ;
		++base_value;
	}
	if (base_value < 2)
		return ;
	if (double_char(base))
		return ;
	ft_print_nbr(nbr, base_value, base);
}
