/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 04:14:07 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/29 04:14:10 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb > 0)
	{
		while ((i * i) < nb)
		{
			i++;
		}
		if ((i * i) == nb)
		{
			return (i);
		}
	}
	return (0);
}

// int main(void)
// {
// 	printf("\nsqrt(-1) =  %d\n", ft_sqrt(-1));
// 	printf("\nsqrt(0)  =  %d\n", ft_sqrt(0));
// 	printf("\nsqrt(1)  =  %d\n", ft_sqrt(1));
// 	printf("\nsqrt(2)  =  %d\n", ft_sqrt(2));
// 	printf("\nsqrt(3)  =  %d\n", ft_sqrt(3));
// 	printf("\nsqrt(4)  =  %d\n\n", ft_sqrt(4));
// }
