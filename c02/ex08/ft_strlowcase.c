/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:18:00 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/11 16:57:57 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 'A' && str[len] <= 'Z')
		{
			str[len] = str[len] + 32;
		}
		len++;
	}
	return (str);
}
