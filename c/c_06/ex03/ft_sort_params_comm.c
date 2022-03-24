/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 05:55:26 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/30 05:55:28 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putstr_arg(int n, char **str)
{
	int i;
	int j;

	i = 1;
	// Loop each argument
	while (i < n)
	{
		j = 0;
		// Loop each character
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int n, char **argv)
{
char	*last;
int 	a;

a = 1;
// Loop each argument
while (a < n - 1)
{
	// if not alphabetical
	if	(ft_strcmp(argv[a], argv[a + 1]) > 0)
	{
		// Switch positions
		last = argv[a];
		argv[a] = argv[a + 1];
		argv[a + 1] = last;
		// Reset to start checking sorting from the beginning
		a = 1;
	}
	// if alphabetical keep going through the arguments
	else
		a++;
}
ft_putstr_arg(n, argv);
return (0);
}

// Tests:
// ./a.out c b a 
// ./a.out 3 2 1 
// ./a.out abc abb aba
// ./a.out abc abb aba