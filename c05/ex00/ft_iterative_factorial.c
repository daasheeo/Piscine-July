/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:41:14 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/19 14:37:58 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	total;

	total = 1;
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (total);
}
