#include <unistd.h>

int main(int n, char **str)
{
	int i;

	i = 0;
	if (n == 2)
	{
		while (str[1])
		{
			if (str[1][i] == 'a')
			{
				write(1, &str[1][i], 1);
				write(1, "\n", 1);
				return (0);
			}
			else
			{
				write(1, "\n", 1);
				return (0);
			}
		}
	}
	else
	{
		write(1, "a\n", 2);
		return (0);
	}
}

