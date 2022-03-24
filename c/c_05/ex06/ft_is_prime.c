/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:56:57 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/29 05:56:59 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

// int main (void)
// {
// 	printf("\n%d: %d\n", -1, ft_is_prime(-1));
// 	printf("%d:  %d\n", 0, ft_is_prime(0));
// 	printf("%d:  %d\n", 1, ft_is_prime(1));
// 	printf("%d:  %d\n", 2, ft_is_prime(2));
// 	printf("%d:  %d\n", 3, ft_is_prime(3));
// 	printf("%d:  %d\n", 4, ft_is_prime(4));
// 	printf("%d:  %d\n", 5, ft_is_prime(5));
// 	printf("%d:  %d\n", 6, ft_is_prime(6));
// 	printf("%d:  %d\n", 7, ft_is_prime(7));
// 	printf("%d:  %d\n", 8, ft_is_prime(8));
// 	printf("%d:  %d\n", 9, ft_is_prime(9));
// 	printf("%d: %d\n", 10, ft_is_prime(10));
// 	printf("%d: %d\n\n", 11, ft_is_prime(11));	
// }