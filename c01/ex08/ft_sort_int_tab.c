/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesmunoz <jesmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:08:24 by jesmunoz          #+#    #+#             */
/*   Updated: 2023/07/09 14:30:24 by jesmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	min_num;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		min_num = i;
		k = i + 1;
		while (k < size)
		{
			if (tab[k] < tab[min_num])
				min_num = k;
			k++;
		}
		swap(&tab[min_num], &tab[i]);
		i++;
	}
}
