/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:27:02 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 00:47:28 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

char	*ft_strndup(char *src, unsigned int n)
{
	unsigned int	size;
	char			*res;
	unsigned int	i;

	size = (unsigned int)ft_strlen(src);
	if (n < size)
		size = n;
	res = (char *)malloc((size + 1) * sizeof(char));
	if (res == (char *)0)
		return (res);
	i = -1;
	while (++i < size)
		res[i] = src[i];
	res[size] = '\0';
	return (res);
}
