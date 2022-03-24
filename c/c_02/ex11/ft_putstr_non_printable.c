/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:17:24 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/25 05:21:22 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_non_printable(char str)
{
	return (str >= 0 && str <= 31);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_non_printable(str[i]))
		{
			ft_putchar('\\');
			hex = "0123456789abcdef";
			ft_putchar(hex[str[i] / 16]);
			ft_putchar(hex[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}	
}

// int main (void)
// {
// 	ft_putchar('\n');
// 	ft_putstr_non_printable("xx\nxx\txx\vxx");
// 	ft_putchar('\n');
// 	ft_putchar('\n');
// } 
