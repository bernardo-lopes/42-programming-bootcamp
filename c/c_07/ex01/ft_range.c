/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:52:28 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/30 22:52:41 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	if (min >= max)
		return (0);
	new = (int *)malloc(sizeof(int) * (max - min));
	if (!new)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		new[i] = min + i;
		i++;
	}
	return (new);
}

// void	debug_dump_array(int numbers[], int size)
// {
// 	int index;

// 	printf("[ ");
// 	index = 0;
// 	while (index < size)
// 	{
// 		printf("%d", numbers[index]);
// 		if (index != size - 1)
// 		{
// 			printf(", ");
// 		}
// 		index++;
// 	}
// 	printf(" ]");
// }

// int		main(void)
// {
// 	int	min;
// 	int	max;

// 	min = 3;
// 	max = 7;
// 	printf("\nmin = %d, max = %d\n\n", min, max);
// 	debug_dump_array(ft_range(min, max), max - min);
// 	printf("\n\n");
// }