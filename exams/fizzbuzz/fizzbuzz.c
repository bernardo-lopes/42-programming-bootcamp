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
	else if (n >= 0)
	{
		putchar(n + '0');
	}
}

int main(void)
{

int i;
char p;

i = 1;
while(i <= 100)
{
	if (i % 3 == 0 && i % 5 != 0)
	{
		write (1, "fizz\n", 5);
	}	
	else if (i % 5 == 0 && i % 3 != 0)
	{
		write(1, "buzz\n", 5);
	}
	else if (i % 5 == 0 && i % 3 == 0)
	{
		write(1, "fizzbuzz\n", 9);
	}
	else
	{
		putnbr(i);
		putchar('\n');
	}
	i++;
}
}
