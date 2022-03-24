/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:45:00 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/29 02:45:08 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}

// int main()
// {
// 	printf("\n-1! =  %d\n\n", ft_recursive_factorial(-1));
// 	printf("\n0!  =  %d\n\n", ft_recursive_factorial(0));
// 	printf("\n1!  =  %d\n\n", ft_recursive_factorial(1));
// 	printf("\n3!  =  %d\n\n", ft_recursive_factorial(3));
// }