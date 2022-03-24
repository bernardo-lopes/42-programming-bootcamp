#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int main (int n, char *args[])
{
	int i;

	i = 0;
	if (n == 2)
	{
		while (is_space(args[1][i]))
			i++;
	   	while (!is_space(args[1][i]) && args[1][i])
			write(1, &args[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
