/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcampo <angcampo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:54:18 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/27 13:57:11 by angcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

t_p_node	*create_node(t_point point)
{
	t_p_node	*new_node;

	new_node = (t_p_node *)malloc(sizeof(t_p_node));
	if (new_node != NULL)
	{
		new_node->point = point;
		new_node->next = NULL;
	}
	return (new_node);
}

t_p_node	*insert_linked_node_at_the_beginning(t_point point, t_p_node **list)
{
	t_p_node	*new_node;

	new_node = create_node(point);
	if (new_node != NULL)
	{
		new_node->next = *list;
		*list = new_node;
	}
	return (new_node);
}

t_p_node	*delete_last_node(t_p_node **list)
{
	t_p_node	*tmp;
	t_p_node	*previous;

	if (!(*list))
		return (NULL);
	tmp = *list;
	previous = *list;
	while (tmp->next)
	{
		previous = tmp;
		tmp = tmp->next;
	}
	previous->next = NULL;
	free(tmp);
	return (*list);
}

t_point	create_point(int x, int y)
{
	t_point	point;

	point.x = x;
	point.y = y;
	return (point);
}
