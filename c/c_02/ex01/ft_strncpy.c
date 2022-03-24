/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:45:52 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/24 01:56:59 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (src[idx] != '\0' && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}

// int 	main(void)
// {
// 	char *src;

// 	int lim = 4;
// 	char dest[lim];
// 	char dest2[lim];

// 	src = "Hello world."; 
// 	printf("\nsource: %s\n\n", src);

// 	strncpy(dest2, src, lim);
// 	printf("strncpy: %s\n\n", dest2);

// 	ft_strncpy(dest, src, lim);
// 	printf("ft_strncpy: %s\n\n", dest);

// 	return (0);
// }
