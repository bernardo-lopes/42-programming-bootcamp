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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	store;

	i = 0;
	while (i < (size / 2))
	{
		store = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = store;
		i++;
	}	
}
