/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 03:59:48 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/23 04:02:33 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int store;

	i = 0;
	while (i < (size / 2))
	{
		store = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = store;
		i++;
	}	
}

int	main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}	