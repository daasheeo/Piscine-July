/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:40:00 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/11 13:45:26 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	len;

	len = 0;
	if (str[len] == '\0')
		return (1);
	while (str[len])
	{
		if ((str[len] >= 97 && str[len] <= 122) || (str[len] >= 65
				&& str[len] <= 90))
			len++;
		else
			return (0);
	}
	return (1);
}
