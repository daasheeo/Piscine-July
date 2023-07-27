/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:50:39 by fnavas-s          #+#    #+#             */
/*   Updated: 2023/07/24 17:09:54 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_read_file	read_file(char *file)
{
	int			archivo;
	char		*buffer;
	int			tamano_archivo;
	long		bytes_leidos;
	t_read_file	result;

	archivo = open(file, O_RDONLY);
	if (archivo == -1)
		write(STDOUT_FILENO, "Error al abrir el archivo\n", 26);
	tamano_archivo = calculate_filesize(archivo);
	close(archivo);
	archivo = open(file, O_RDONLY);
	buffer = (char *)malloc(tamano_archivo);
	if (buffer == NULL)
	{
		write(STDOUT_FILENO, "Error al asignar memoria para el buffer\n", 40);
		close(archivo);
		bytes_leidos = -1;
	}
	bytes_leidos = read(archivo, buffer, tamano_archivo);
	if (bytes_leidos == -1)
	{
		write(STDOUT_FILENO, "Error al leer el archivo\n", 25);
		free(buffer);
		close(archivo);
		bytes_leidos = -1;
	}
	result.size = bytes_leidos;
	result.buffer = buffer;
	return (result);
	
	close(archivo);
}
