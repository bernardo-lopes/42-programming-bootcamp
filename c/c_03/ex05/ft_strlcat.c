/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 06:47:45 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/26 06:47:48 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sz_dest;
	unsigned int	sz_src;
	unsigned int	j;
	unsigned int	i;

	sz_dest = ft_strlen(dest);
	sz_src = ft_strlen(src);
	j = 0;
	i = sz_dest;
	if (size <= sz_dest)
	{
		return (size + sz_src);
	}
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sz_dest + sz_src);
}

int main()
{
	char dest [] = "12345";
	char src[] = "0987654321";

	printf("\nsource:      %s \n", src);
	printf("destination: %s \n\n", dest);

    // input > dest ---> destination size = input - 1 
    // 			    ---> returns: source size + destination size 
	// 
    // input < dest ---> destination remains the same 
    // 			    ---> returns: source size + input

	printf("ft_strlcat: %i \n\n", ft_strlcat(dest, src, 10));
	printf("destination: %s \n\n", dest);
}
