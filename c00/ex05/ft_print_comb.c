/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:58:24 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/05 21:58:28 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	zero;
	char	one;
	char	two;

	zero = '0';
	while (zero <= '7')
	{
		one = zero + 1;
		while (one <= '8')
		{
			two = one + 1;
			while (two <= '9')
			{
				write(1, &zero, 1);
				write(1, &one, 1);
				write(1, &two, 1);
				if (!(zero == '7' && one == '8' && two == '9'))
					write(1, ", ", 2);
				two++;
			}
			one++;
		}
		zero++;
	}
}
