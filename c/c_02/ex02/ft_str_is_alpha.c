/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 04:19:22 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/24 04:51:46 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0' )
	{
		if ((str[idx] >= 'A' && str[idx] <= 'Z')
			|| (str[idx] >= 'a' && str[idx] <= 'z'))
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
// printf("\nEmpty: %d\n",	ft_str_is_alpha(""));
// printf("\nAlpha: %d\n",	ft_str_is_alpha("AbcDe"));
// printf("\nNon-alpha: %d\n\n",	ft_str_is_alpha("Abscde3"));
// }