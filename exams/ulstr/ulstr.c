#include <unistd.h>

int main(int n, char *args[])
{
	int i;

	i = 0;
	if (n == 2)
	{
		while (args[1][i])
		{
			if (args[1][i] >= 'a' && args[1][i] <= 'z')
				args[1][i] -= 32;
			else if (args[1][i] >= 'A' && args[1][i] <= 'Z')
				args[1][i] += 32;
			write(1, &args[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
