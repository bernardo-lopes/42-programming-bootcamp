

#include <stdio.h>

#include "ft_abs.h"

int	main(void)
{
	int	i;

	i = -2;
	while (i <= 2)
	{
		printf("\n");
		printf("abs(%d) = %d\n", i, ABS(i));
		printf("\n");
		i++;
	}
}