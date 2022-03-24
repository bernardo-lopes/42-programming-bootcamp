#include <stdlib.h>

char *ft_strdup(char *src)
{
	new = malloc(ft_strlen(src) + 1);
	if (new != NULL)
	{
		while (src[i])
		{
			new[i] = src[i];
			i++;
		}	
		new[i] = '\0';
	}
	return (new);

