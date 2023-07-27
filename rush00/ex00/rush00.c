/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com:>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:05:21 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/08 17:05:24 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x, int i)
{
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x >= 2)
		ft_putchar('o');
	ft_putchar('\n');
}

void	middle_line(int j, int y, int k, int x)
{
	while (j < y - 2)
	{
		ft_putchar('|');
		while (k < x - 2)
		{
			ft_putchar(' ');
			k++;
		}
		if (!(x == 1))
			ft_putchar('|');
		ft_putchar('\n');
		j++;
		k = 0;
	}
}

void	last_line(int y, int x, int l)
{
	if (y >= 2)
	{
		ft_putchar('o');
		while (l < x - 2)
		{
			ft_putchar('-');
			l++;
		}
		if (x >= 2)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (!(y <= 0 || x <= 0))
	{
		first_line(x, i);
		middle_line(j, y, k, x);
		last_line(y, x, l);
	}
}
