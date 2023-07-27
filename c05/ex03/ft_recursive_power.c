/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:25:52 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/19 15:32:51 by jesmunoz         ###   ########.fr       */
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
