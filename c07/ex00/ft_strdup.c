/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:25:10 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/24 23:07:38 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}*/
