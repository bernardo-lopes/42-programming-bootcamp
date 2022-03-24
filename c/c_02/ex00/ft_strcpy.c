/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:45:52 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/24 01:56:59 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

// int 	main(void)
// {
// 	char *src;
// 	char dest[5];
// 	char dest2[5];

// 	src = "Test";
// 	printf("\nSource: %s\n\n", src);
// 	strcpy(dest2, src);
// 	printf("strcpy: %s\n\n", dest2);
// 	ft_strcpy(dest, src);
// 	printf("ft_strcpy: %s\n\n", dest);
// }