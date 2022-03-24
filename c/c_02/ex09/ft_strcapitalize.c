/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:44:39 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/24 22:44:46 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			str[idx] += 32;
		}
		idx++;
	}
	return (str);
}

bool	ft_char_is_alpha(char str)
{
	return ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'));
}

bool	ft_char_is_numeric(char str)
{
	return ((str >= '0') && (str <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int		idx;
	char	*c0;
	char	*c1;

	idx = 0;
	str = ft_strlowcase(str);
	if (ft_char_is_alpha(str[0]) == 1)
	{
		str[0] -= 32;
	}
	while (str[idx] != '\0')
	{
		c0 = &str[idx];
		c1 = &str[idx + 1];
		if (ft_char_is_alpha(*c0) == 0 && ft_char_is_numeric(*c0) == 0
			&& ft_char_is_alpha(*c1) == 1)
		{
			str[idx + 1] -= 32;
			idx++;
		}
		idx++;
	}
	return (str);
}

// int main(void)
// {
// 	char word0[] = "salut comment tu vas ? 42mots quarante-deux";
// 	// char word0[] = " vas # 42mots";
// 	printf("\n\nBefore:\n%s\n", word0);
// 	printf("\nAfter:\n%s\n\n\n", ft_strcapitalize(word0));

// 	char word1[] = "sAlUt coMMent TU vas ? 42mots QUArante-deux";
// 	printf("\nBefore:\n%s\n", word1);
// 	printf("\nAfter:\n%s\n\n\n", ft_strcapitalize(word1));

// 	char word2[] = "#alut comment tu vas ? 42mots quarante-deux";
// 	printf("\nBefore:\n%s\n", word2);
// 	printf("\nAfter:\n%s\n\n\n", ft_strcapitalize(word2));

// 	char word3[] = "5alut comment tu vas ? 42mots quarante-deux";
// 	printf("\nBefore:\n%s\n", word3);
// 	printf("\nAfter:\n%s\n\n\n", ft_strcapitalize(word3));
// }
