/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 07:05:29 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/31 07:05:35 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum a_bool{
	false = 0,
	true = 1,
}	t_bool;

# define FALSE false
# define TRUE true
# define EVEN(number) (number % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
#endif

// ////////////////////////////
// 
// #include "ft_boolean.h"
// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }
// 
// t_bool	ft_is_even(int nbr)
// {
// 	return ((EVEN(nbr)) ? TRUE : FALSE);
// }
// 
// int	main(int argc, char **argv)
// {
// 	(void)argv;
// 	if (ft_is_even(argc - 1) == TRUE)
// 		ft_putstr(EVEN_MSG);
// 	else
// 		ft_putstr(ODD_MSG);
// 	return (SUCCESS);
// }
