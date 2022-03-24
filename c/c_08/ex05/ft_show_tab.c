/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:41:58 by bsantos-          #+#    #+#             */
/*   Updated: 2022/02/03 01:42:01 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
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

void ft_show_tab(struct s_stock_str *strct)
{
	int i;

	i = 0;
	while(strct[i].str != 0)
	{
		ft_putstr(strct[i].str);
		ft_putstr("\n");
		ft_putnbr(strct[i].size);
		ft_putstr("\n");
		ft_putstr(strct[i].copy);
		ft_putstr("\n");
		i++;
	}
}

int					main(void)
{
	int					index;
	int					ac;
	char				**av;
	struct s_stock_str	*structs;

	ac = 10;
	av = (char **)malloc((ac + 1) * sizeof(char *));
	index = 0;
	while (index < ac)
	{
		av[index] = (char *)malloc((2 + 1) * sizeof(char));
		av[index][0] = 'x';
		av[index][1] = (char)(index + 'a');
		av[index][2] = '\0';
		index++;
	}
	structs = ft_strs_to_tab(ac, av);
	ft_show_tab(structs);
}