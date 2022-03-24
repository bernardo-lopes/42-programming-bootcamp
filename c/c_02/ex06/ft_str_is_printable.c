/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 04:19:22 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/24 04:51:46 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0' )
	{
		if (str[idx] >= 32 && str[idx] <= 126)
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
// printf("\nEmpty: %d\n",	ft_str_is_printable(""));
// printf("\nPrintable: %d\n",	ft_str_is_printable("ABDELKFSCO?I340990%"));
// printf("\nNon-printable: %d\n\n",	ft_str_is_printable("\n\t\v\f"));
// }