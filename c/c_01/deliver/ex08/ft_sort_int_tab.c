/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 05:06:19 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/23 05:06:23 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	store;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
			store = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = store;
			}
			i++;
		}
		size--;
	}
}
