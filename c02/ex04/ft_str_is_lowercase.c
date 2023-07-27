/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:49:08 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/11 13:50:27 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	len;

	len = 0;
	if (str[len] == '\0')
		return (1);
	while (str[len])
	{
		if ((str[len] >= 97 && str[len] <= 122))
			len++;
		else
			return (0);
	}
	return (1);
}
