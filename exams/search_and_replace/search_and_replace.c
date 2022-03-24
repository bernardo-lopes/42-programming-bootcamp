#include <unistd.h>

int main(int n, char *args[])
{
int i;

i = 0;
if (n == 4)
{
	while (args[1][i])
	{
		if (args[1][i] == args[2][0])
			write(1, &args[3][0], 1);
		else
			write(1, &args[1][i], 1);
		i++;
	}
}
write(1, "\n", 1);
}
