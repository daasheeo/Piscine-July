/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:42:53 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/11 16:31:13 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 'a' && str[len] <= 'z')
		{
			str[len] = str[len] - 32;
		}
		len++;
	}
	return (str);
}
