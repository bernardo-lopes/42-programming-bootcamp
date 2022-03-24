#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\n';
	return(s1);
}

int main(void)
{
	char dest[] = "";
	char source[] = "teste";

	ft_strcpy(dest, source);

	printf("\n%s\n", dest);
}
