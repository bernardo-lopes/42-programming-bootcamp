#include <unistd.h>

void putstr(char str[])
{
	int i;

	i=0;
	while(str[i])
		write(1, &str[i++], 1);
}

int main(int n, char *args[])
{
	if (n >= 2)
		putstr(args[n - 1]);
	putstr("\n");
}

