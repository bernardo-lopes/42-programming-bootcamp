/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 01:18:03 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/23 01:18:06 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

int main()
{
	int a;
	int b;

	a = 20;
	b = 5;
	printf("%d / %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("= %d, rem: %d\n", a, b);
}
