#include <unistd.h>

int main(int n, char *str[])
{
	int i;
	int letter;
	
	i = 0;
	if (n == 2)
	{
	while (str[1][i])
	{
		letter = 0;
		if (str[1][i] >= 'a' && str[1][i] <= 'z')
		{
			letter = str[1][i] - 96;
			while(letter--)
				write(1, &str[1][i], 1);
		}
		else if (str[1][i] >= 'A' && str[1][i] <= 'Z')
		{
			letter = str[1][i] - 64;
			while (letter--)
				write(1, &str[1][i], 1);
		}
		else
		{
			write(1, &str[1][i], 1);
		}
		i++;
	}
	}
	write(1, "\n", 1);
	return(0);
}


