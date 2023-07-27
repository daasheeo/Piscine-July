/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:53:07 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/11 15:39:40 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	len;

	len = 0;
	if (str[len] == '\0')
		return (1);
	while (str[len])
	{
		if ((str[len] >= 32 && str[len] <= 126))
			len++;
		else
			return (0);
	}
	return (1);
}
