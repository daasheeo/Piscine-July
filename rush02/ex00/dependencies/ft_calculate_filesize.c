/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_filesize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:50:20 by fnavas-s          #+#    #+#             */
/*   Updated: 2023/07/23 20:10:34 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	calculate_filesize(int file)
{
	long	size;
	char	buffer[1];

	size = 0;
	while (read(file, buffer, sizeof(buffer)) == 1)
	{
		size++;
	}
	return (size);
}
