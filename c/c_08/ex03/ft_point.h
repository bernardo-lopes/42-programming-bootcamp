/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 08:19:46 by bsantos-          #+#    #+#             */
/*   Updated: 2022/01/31 08:19:51 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}				t_point;

#endif

// ////////////////////////////////
// #include <stdio.h>
// 
// #include "ft_point.h"
// 
// void	set_point(t_point *point)
// {
// 	point->x = 42;
// 	point->y = 21;
// }
// 
// int	main(void)
// {
// 	t_point	test[3];
// 
// 	set_point(&test[0]);
// 	printf("\n\"test\" struct: x = %d\n", test[0].x);
// 	printf("\n\"test\" struct: y = %d\n\n", test[0].y);
// 	return (0);
// }