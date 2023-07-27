/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:44:09 by fnavas-s          #+#    #+#             */
/*   Updated: 2023/07/23 22:04:52 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
typedef struct s_read_file
{
	int		size;
	char	*buffer;
}			t_read_file;

t_read_file	read_file(char *file);
char		*ft_find_word_in_dictionary(char *dictionary, int number);
int			ft_strlen(char *str);
int			calculate_filesize(int file);
void		ft_putchar(char c);
void		ft_putstr(char *str);
char		*ft_strstr(char *str, char *to_find);
char		*ft_strdup(char *src);
#endif
