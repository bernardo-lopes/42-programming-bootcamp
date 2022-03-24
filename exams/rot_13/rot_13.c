#include <unistd.h>

int main(int n, char *args[])
{
	int i;
	char letter;

	i = 0;
	if (n == 2)
	{
		while(args[1][i])
		{
			if (args[1][i] >= 'a' && args[1][i] <= 'm')
			{
				letter = args[1][i] + 13;
				write (1, &letter, 1);
			}
			else if (args[1][i] >= 'n' && args[1][i] <= 'z')
			{
				letter = args[1][i] - 13;
				write (1, &letter, 1);
			}
			else if (args[1][i] >= 'A' && args[1][i] <= 'M')
			{
				letter = args[1][i] + 13;
				write (1, &letter, 1);
			}
			else if (args[1][i] >= 'N' && args[1][i] <= 'Z')
			{
				letter = args[1][i] - 13;
				write (1, &letter, 1);
			}
			else
				write(1, &args[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
