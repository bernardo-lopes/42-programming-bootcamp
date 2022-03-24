/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 01:56:51 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/31 01:56:58 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new;
	char	*tmp;
	int		strs_len;

	if (size == 0)
	{
		new = ((char *)malloc(1));
		new[0] = '\0';
		return (new);
	}
	i = 0;
	strs_len = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	new = (char *)malloc(strs_len + ft_strlen(sep) * (size - 1) + 1);
	tmp = ft_strcat(new, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i]);
		i++;
	}
	return (new);
}

// int		main(void)
// {
// 	char	**strs;

// 	strs = (char **)malloc(4 * sizeof(strs));
// 	strs[0] = "test1";
// 	strs[1] = "test2";
// 	strs[2] = "test3";
// 	strs[3] = "test4";

// 	printf("\n$%s$\n", ft_strjoin(4, strs, "_"));
// 	printf("\n");
// }