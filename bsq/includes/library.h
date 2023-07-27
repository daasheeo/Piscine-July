/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:35:11 by angcampo          #+#    #+#             */
/*   Updated: 2023/07/27 14:12:33 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define EMPTY 0
# define OBSTACLE 1
# define FULL 2

typedef struct s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct s_square
{
	t_point			point;
	int				lenght;
}					t_square;

typedef struct s_p_node
{
	t_point			point;
	struct s_p_node	*next;
}					t_p_node;

typedef struct s_map
{
	int				**matrix;
	t_p_node		*obstacles;
	int				width;
	int				height;
	char			*characters;
}					t_map;

char				**ft_split(char *str, char *charset);
int					ft_strlen(char *str);
char				*ft_strndup(char *src, unsigned int n);
int					ft_atoi(char *str);

t_map				*initialize_map(char *args, int width);
t_map				*read_map(char *filepath);
t_map				*get_map(char *str);
int					**get_matrix(t_map *map);

void				release_strings_allocation(char **str, int size);
void				release_map_allocation(t_map *map);
void				release_matrix_allocation(int **matrix, int size);

t_square			*get_bsq(t_map *map);
int					point_in_square(t_point point, t_square *square);
void				print_matrix(t_map *map, t_square *bsq);

t_p_node			*create_node(t_point point);
t_p_node			*insert_linked_node_at_the_beginning(t_point point,
						t_p_node **list);
t_p_node			*delete_last_node(t_p_node **list);
t_point				create_point(int x, int y);
void				print_map(t_map *map);

#endif