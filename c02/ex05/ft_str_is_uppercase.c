/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:51:04 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/11 13:51:54 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	len;

	len = 0;
	if (str[len] == '\0')
		return (1);
	while (str[len])
	{
		if ((str[len] >= 65 && str[len] <= 90))
			len++;
		else
			return (0);
	}
	return (1);
}
