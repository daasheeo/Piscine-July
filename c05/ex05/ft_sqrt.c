/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:27:25 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/19 20:20:55 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	total;

	total = nb;
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (total);
}

int	ft_sqrt(int nb)
{
	float	temp;
	float	sqrt;
	float	square;
	long	b;

	b = nb;
	temp = 0;
	sqrt = b / 2;
	square = 0;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (b / temp + temp) / 2;
	}
	square = ft_recursive_power(sqrt, 2);
	if (square != b)
		return (0);
	return (sqrt);
}
