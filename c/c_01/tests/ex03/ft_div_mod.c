/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 01:00:50 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/23 01:10:27 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, rem: %d\n", a, b, div, mod);
}
