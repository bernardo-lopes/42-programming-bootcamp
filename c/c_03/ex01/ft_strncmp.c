/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 06:15:18 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/25 06:15:24 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i] && i < (n - 1))
	{
	i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	int x;
// 	char	*s1 = "Difference";
// 	char	*s2 = "Differenec";

// 	x = ft_strncmp(s1, s2, 20);
// 	printf("\n%d\n\n",x);
// }
