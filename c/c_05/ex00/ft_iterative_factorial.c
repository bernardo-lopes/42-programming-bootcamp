/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:45:00 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/29 02:45:08 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// int main()
// {
// 	printf("\n-1! =  %d\n\n", ft_iterative_factorial(-1));
// 	printf("\n0!  =  %d\n\n", ft_iterative_factorial(0));
// 	printf("\n1!  =  %d\n\n", ft_iterative_factorial(1));
// 	printf("\n3!  =  %d\n\n", ft_iterative_factorial(3));
// }