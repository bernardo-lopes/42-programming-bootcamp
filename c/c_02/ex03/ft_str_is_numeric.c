/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 04:19:22 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/24 04:51:46 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_numeric(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0' )
	{
		if (str[idx] >= '0' && str[idx] <= '9')
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
// printf("\nEmpty: %d\n",	ft_str_is_numeric(""));
// printf("\nNumeric: %d\n",	ft_str_is_numeric("01234"));
// printf("\nNon-numeric: %d\n\n",	ft_str_is_numeric("1234ABC"));
// }