/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:27:15 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/25 17:40:39 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

int	ft_is_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) == 1)
			i++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

char	*ft_strdup(char *src, int j)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc((j + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (i < j && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		size;
	int		i;
	int		j;

	i = 0;
	size = ft_wordcount(str, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < size)
	{
		while (ft_is_charset(*str, charset))
			i++;
		j = ft_wordlen(str, charset);
		dest[j] = ft_strdup(src, j);
		str += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
}
