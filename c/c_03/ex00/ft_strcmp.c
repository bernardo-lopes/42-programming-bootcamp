/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 06:15:18 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/25 06:15:24 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
	i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char	*s1 = "abcdef";
	char	*s2 = "abcdea";

	printf("\n%d\n\n", ft_strcmp(s1, s2));

	char	*s3 = "abcdef";
	char	*s4 = "abcdeb";

	printf("\n%d\n\n", ft_strcmp(s3, s4));
}
