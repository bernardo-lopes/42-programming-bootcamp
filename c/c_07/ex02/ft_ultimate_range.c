/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:30:37 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/31 00:30:42 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	lim;
	int	i;
	int	*tmp;

	if (min >= max)
		return (0);
	lim = max - min;
	*range = (int *)malloc(sizeof(int) * lim);
	if (!*range)
		return (-1);
	tmp = *range;
	i = 0;
	while (i < lim)
	{
		tmp[i] = min + i;
		i++;
	}
	return (lim);
}

// void	debug_dump_array(int numbers[], int size)
// {
// 	int index;
// 
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
// 
// int		main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	bound;
// 
// 	min = 7;
// 	max = 10;
// 	bound = ft_ultimate_range(&range, min, max);
// 	printf("\nmin = %d, max = %d, range = %d\n\n", min, max, bound);
// 	fflush(stdout);
// 	debug_dump_array(range, bound);
// 	printf("\n\n");
// }