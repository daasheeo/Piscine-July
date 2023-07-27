/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:46:06 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/11 13:48:42 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	len;

	len = 0;
	if (str[len] == '\0')
		return (1);
	while (str[len])
	{
		if ((str[len] >= 48 && str[len] <= 57))
			len++;
		else
			return (0);
	}
	return (1);
}
