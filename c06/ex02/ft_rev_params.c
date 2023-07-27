/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:02:42 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/19 09:24:49 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (--argc >= 1)
		{
			write(1, argv[argc], ft_strlen(argv[argc]));
			write(1, "\n", 1);
		}
	}
	return (0);
}
