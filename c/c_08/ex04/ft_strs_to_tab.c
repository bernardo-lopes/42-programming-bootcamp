/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:41:04 by bsantos-          #+#    #+#             */
/*   Updated: 2022/02/01 19:41:12 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

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

void	ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*new_struct;
	int			i;

	new_struct = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!new_struct)
		return (0);
	i = 0;
	while (i < ac)
	{
		new_struct[i].size = ft_strlen(av[i]);
		new_struct[i].str = (char *)malloc(ft_strlen(av[i]) + 1);
		ft_strcpy(new_struct[i].str, av[i]);
		new_struct[i].copy = (char *)malloc(ft_strlen(av[i]) + 1);
		ft_strcpy(new_struct[i].copy, av[i]);
		i++;
	}
	new_struct[i].str = 0;
	return (new_struct);
}

int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*structs;
	structs = ft_strs_to_tab(argc, argv);	
	i = 0;
	while (i < argc)
	{
		printf("\nstruct[%d]:\n\n", i);
		printf("size:     %d\n", structs[i].size);
		printf("original: $%s$ @ %p\n", structs[i].str, structs[i].str);
		printf("copied:   $%s$ @ %p\n\n\n", structs[i].copy, structs[i].copy);
		i++;
	}
}
