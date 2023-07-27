/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:19:08 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/13 19:27:35 by jesmunoz         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		j = i + 1;
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
		i++;
	}
	return (str);
}
