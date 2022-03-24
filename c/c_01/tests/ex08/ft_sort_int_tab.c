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

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int store;

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

int	main()
{
	int tab[6] = {5, 3, 1, 2, 4, 0};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}	