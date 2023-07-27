/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:14:06 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/23 22:17:49 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dependencies/rush.h"

t_read_file	read_file(char *file);

int	number_check(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < '0' && str[i] > '9')
		{
			ft_putstr("Error"), ft_putstr("\n");
			return (1);
		}
	return (0);
}

int	main(int argc, char *argv[])
{
	int			i;
	t_read_file	result;
	char		*number_str;
	int			zero_flag;
	int			size;
	char		temp_array[3];

	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error. Incorrect amount of arguments.");
		return (1);
	}
	if (number_check(argv[argc - 1]) == 1)
	{
		ft_putstr("Error\n");
		return (2);
	}
	if (argc > 2)
	{
		result = read_file(argv[1]);
		if (result.size == -1)
			ft_putstr("Dict Error\n");
	}
	else
	{
		result = read_file("numbers.dict");
		if (result.size == -1)
			ft_putstr("Dict Error\n");
	}
	// Aqui ya tenemos el diccionario y el tamño de el.
	number_str = argv[argc - 1];
	// fase 1, validar array numerico
	i = -1;
	while (++i < ft_strlen(number_str))
	{
		if (!(number_str[i] >= '0' && number_str[i] <= '9'))
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	if (ft_strlen(number_str) == 1 && number_str[0] == '0')
	{
		// buscamos "0:" e imprimimos la palabra correspondiente
		ft_putstr(ft_find_word_in_dictionary(result.buffer, number_str[i - 1]
				- '0'));
	}
	// fase 2, eliminar ceros
	i = -1;
	zero_flag = 0;
	while (++i < ft_strlen(number_str))
	{
		if (number_str[i] >= '1' && number_str[i] <= '9')
			zero_flag = 1;
		if (number_str[i] == '0' && zero_flag == 0)
			number_str = &number_str[i + 1];
	}
	// fase 3, leer numero
	// vvvv solo si el numero de las decenas no es un 1
	size = ft_strlen(number_str);
	while (number_str[--size])
	{
		if (number_str[size] != '0')
		{
			ft_putstr(ft_find_word_in_dictionary(result.buffer, number_str[size]
					- '0'));
		}
	}

}
