/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:35:48 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/19 20:40:46 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb > 0)
	{
		total *= nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	return (total);
}
