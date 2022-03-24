/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 04:19:22 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/24 04:51:46 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0' )
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] -= 32;
		}
		idx++;
	}
	return (str);
}

// int main(void)
// {
// 	char word[] = "Test 123 =!&?.-";
// printf("\nInput: %s\n", word);
// printf("\nOutput: %s\n\n", ft_strupcase(word));
// }