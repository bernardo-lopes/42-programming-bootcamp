/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 05:05:34 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/28 06:25:11 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
char lower;
char upper;
int i;

lower = 'c';
upper = 'B';
i = 0;

write (1, "a" ,1);

while (upper <= 'Z')
{
	if (i % 2 == 0)
	{
		write(1, &upper, 1);
		upper += 2;
	
	}
	else
	{
		write(1, &lower, 1);
		lower += 2;
	  	
	}
i++;
}
	write(1, "\n", 1);
}


