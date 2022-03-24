/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
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
	int	a;
	int	x;

	a = 1;
	x = 2;
	if (nb < 2)
		return (0);
	while (nb % x != 0 && x < ((nb / x) + (nb % x)))
		x++;
	if (nb % x == 0 && nb != 2)
		return (0);
	else
		return (nb);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb += 1;
		ft_is_prime(nb);
	}
	return (ft_is_prime(nb));
}

// int main (void)
// {
// 	printf("\n%d is prime, so: %d\n", 7, ft_find_next_prime(7));	
// 	printf("\n%d is not prime, 
// so the next prime is: %d\n\n", 8, ft_find_next_prime(8));	
// 	// printf("\n%d -> %d\n\n", 4, ft_find_next_prime(4));	
// }