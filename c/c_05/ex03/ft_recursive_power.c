/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:41:14 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/29 03:41:40 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

// int main(void)
// {
// 	printf("\n2^-2 =  %d\n", ft_recursive_power(2, -2));
// 	printf("\n-2^3 = %d\n", ft_recursive_power(-2, 3));
// 	printf("\n0^0  =  %d\n", ft_recursive_power(0, 0));
// 	printf("\n2^0  =  %d\n", ft_recursive_power(2, 0));
// 	printf("\n2^4  =  %d\n\n", ft_recursive_power(2, 4));
// }
