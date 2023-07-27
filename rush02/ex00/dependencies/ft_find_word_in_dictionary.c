/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_word_in_dictionary.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:51:46 by fnavas-s          #+#    #+#             */
/*   Updated: 2023/07/23 22:08:52 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*cut_off(char *str);

int	num_digits(int number)
{
	int	count;

	count = 0;
	while (number != 0)
	{
		++count;
		number /= 10;
	}
	return (count);
}

// Function to convert an integer to a string
char	*int_to_str(int number)
{
	int		num_digit;
	char	*str;
	int		index;

	num_digit = num_digits(number);
	str = (char *)malloc((num_digit + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	index = num_digit - 1;
	while (number != 0)
	{
		str[index] = '0' + (number % 10);
		number /= 10;
		--index;
	}
	str[num_digit] = '\0';
	return (str);
}

char	*ft_find_word_in_dictionary(char *dictionary, int number)
{
	char	*word;
	char	*str;
	char	*allocated;

	str = int_to_str(number);
	allocated = ft_strdup(dictionary);
	word = ft_strstr(allocated, str);
	word = cut_off(word);
	return (word);
}

char	*cut_off(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	str[i] = ' ';
	str[i + 1] = '\0';
	i = 0;
	while ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		i++;
	str = &str[i];
	return (str);
}
