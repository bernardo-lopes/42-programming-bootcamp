/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 04:01:37 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/29 04:01:41 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

// int main(void)
// {
// 	printf("\nf(0) = %d\n", ft_fibonacci(0));
// 	printf("\nf(1) = %d\n", ft_fibonacci(1));
// 	printf("\nf(2) = %d\n", ft_fibonacci(2));
// 	printf("\nf(3) = %d\n", ft_fibonacci(3));
// 	printf("\nf(4) = %d\n", ft_fibonacci(4));
// 	printf("\nf(5) = %d\n", ft_fibonacci(5));
// 	printf("\nf(6) = %d\n", ft_fibonacci(6));
// 	printf("\nf(7) = %d\n\n", ft_fibonacci(7));
// }