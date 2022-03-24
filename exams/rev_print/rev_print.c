#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char str[])
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char str[])
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int n, char *args[])
{
	int i;
	int size;
	char tmp;

	i = 0;
	if (n == 2)
	{
		size = ft_strlen(args[1]);
		while (i < (size / 2))
		{
			write(1, &i, 1);
			tmp = args[1][i];
			args[1][i] = args[1][size - i -1];
			args[1][size - i - 1] = tmp;
			i++;
		}
		ft_putstr(args[1]);
	}
	write (1, "\n", 1);
}
