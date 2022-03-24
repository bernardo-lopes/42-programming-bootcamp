/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 00:08:24 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/25 05:49:17 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int 	main(void)
{
	char *src;

	unsigned int lim = 14;
	char dest[lim];
	unsigned int sz;

	src = "Hello world."; 
	printf("\nsource: %s\n\n", src);
	sz = ft_strlcpy(dest, src, lim);
	printf("dest: %s\n\n", dest);
	printf("ft_strncpy: %u\n\n", sz);

	return (0);
}