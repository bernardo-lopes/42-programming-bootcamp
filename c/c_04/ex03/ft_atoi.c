/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:07:20 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/26 23:07:24 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

bool	is_in_string(char str, char *find)
{
	while (*find)
	{
		if (str == *find)
			return (1);
		find++;
	}
	return (0);
}

bool	is_space(char str)
{	
	return (is_in_string(str, "\t\n\v\f\r "));
}

bool	is_operator(char str)
{
	return (is_in_string(str, "-+"));
}

bool	is_numeric(char str)
{
	return (str >= '0' && str <= '9');
}

int	ft_atoi(char *str)
{
	int	minus;
	int	result;

	minus = 0;
	result = 0;
	while (is_space(*str))
		str++;
	while (is_operator(*str))
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while (is_numeric(*str))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (minus % 2 == 0)
		return (result);
	else
	{
		result *= -1;
		return (result);
	}
}

// int		main(void)
// {
// 	char *str1;
// 	char *str2;
// 	char *str3;
// 	char *str4;
// 
// 	str1 = "+-+- 1234";
// 	str2 = "   -+-+-ABC1234";
// 	str3 = "   -+-+-1234";
// 	str4 = "    +-+-1234";
// 
// 	printf("\n%s -> %d\n", str1, ft_atoi(str1));
// 	printf("\n%s -> %d\n\n", str2, ft_atoi(str2));
// 	printf("\n%s -> %d\n\n", str3, ft_atoi(str3));
// 	printf("\n%s -> %d\n\n", str4, ft_atoi(str4));
// }