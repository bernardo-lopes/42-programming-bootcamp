
#include <stdio.h>

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	test[3];

	set_point(&test[0]);
	printf("\n\"test\" struct: x = %d\n", test[0].x);
	printf("\n\"test\" struct: y = %d\n\n", test[0].y);
	return (0);
}