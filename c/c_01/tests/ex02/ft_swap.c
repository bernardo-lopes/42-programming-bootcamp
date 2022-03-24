#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int a;
	int b;

	a = 42;
	b = 12;

	ft_swap(&a, &b);
	printf("%d\n%d\n", a, b);
	return 0;
	}