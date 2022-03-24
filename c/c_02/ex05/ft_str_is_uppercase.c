/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 04:19:22 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/24 04:51:46 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0' )
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			idx++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int main(void)
// {
// printf("\nEmpty: %d\n",	ft_str_is_uppercase(""));
// printf("\nLowercase: %d\n",	ft_str_is_uppercase("abcdABC"));
// printf("\nUppercase: %d\n\n",	ft_str_is_uppercase("ABCD"));
// }