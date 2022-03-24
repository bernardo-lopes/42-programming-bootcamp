/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:15:16 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/29 03:15:20 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}

// int main(void)
// {
// 	printf("\n2^-2 =  %d\n", ft_iterative_power(2, -2));
// 	printf("\n-2^3 = %d\n", ft_iterative_power(-2, 3));
// 	printf("\n0^0  =  %d\n", ft_iterative_power(0, 0));
// 	printf("\n2^0  =  %d\n", ft_iterative_power(2, 0));
// 	printf("\n2^4  =  %d\n\n", ft_iterative_power(2, 4));
// }