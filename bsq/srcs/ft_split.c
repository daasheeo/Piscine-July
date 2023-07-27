/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:02:48 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/26 21:37:50 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

int	ft_char_in_string(char c, char *str)
{
	while (*str != '\0' && *str != c)
		str++;
	return (*str == c);
}

int	res_size(char *str, char *charset)
{
	int	size_set;

	size_set = 1;
	while (*str)
	{
		while (*str && ft_char_in_string(*str, charset))
			str++;
		if (*str)
			size_set++;
		while (*str && !ft_char_in_string(*str, charset))
			str++;
	}
	return (size_set);
}

int	*res_sizes(char *str, char *charset)
{
	int	*sizes;
	int	i;

	sizes = (int *)malloc(res_size(str, charset) * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_char_in_string(*str, charset))
			str++;
		sizes[i] = 0;
		while (*str && !ft_char_in_string(*str, charset))
		{
			sizes[i]++;
			str++;
		}
		i++;
	}
	sizes[i] = 0;
	return (sizes);
}

char	**initialize_res(char *str, char *charset)
{
	char	**res;
	int		*sizes;
	int		size;
	int		i;

	size = res_size(str, charset);
	res = (char **)malloc(size * sizeof(char *));
	sizes = res_sizes(str, charset);
	if (!res || !sizes)
		return (NULL);
	i = -1;
	while (++i < size - 1)
	{
		res[i] = (char *)malloc(sizes[i] * sizeof(char));
		if (!res[i])
		{
			release_strings_allocation(res, i - 1);
			return (NULL);
		}
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;
	int		end;

	res = initialize_res(str, charset);
	if (res == NULL)
		return (NULL);
	i = 0;
	end = 0;
	while (*str)
	{
		j = 0;
		while (*str && ft_char_in_string(*str, charset))
			str++;
		while (*str && !ft_char_in_string(*str, charset))
		{
			res[i][j] = *str;
			j++;
			str++;
			res[i][j] = '\0';
		}
		i++;
	}
	return (res);
}
