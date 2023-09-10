/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:54:27 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/10 12:44:16 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
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
	int	min;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			min = i;
			j = i + 1;
			while (j < size)
			{
				if (tab[i] > tab[j])
					min = j;
				j++;
			}
			ft_swap(&tab[min], &tab[i]);
			i++;
		}
		size--;
	}	
}
