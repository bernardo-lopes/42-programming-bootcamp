#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int n)
{
	if (n > 9)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	if else (n >= 0)
	{
		putchar(n + '0');
	}
}

int main(void)
{
	int i;

	i=9;
	while (i >= 0)
	{
		putnbr(i);
	i--;
	}
}


