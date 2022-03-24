/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:13:56 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/30 21:13:59 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(ft_strlen(src) + 1);
	if (!new)
		return (0);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int		main(void)
// {
// 	char	*str;
// 	char	*allocated;
// 	char	*allocated_ft;
// 
// 	str = "test";
// 
// 	printf("\nbase string:         $%s$ @ %p\n", str, str);
// 	allocated = strdup(str);
// 	printf("\noriginal function:   $%s$ @ %p\n", allocated, allocated);
// 	allocated_ft = ft_strdup(str);
// 	printf("\nmy function:         $%s$ @ %p\n\n", allocated_ft, allocated_ft);
// }