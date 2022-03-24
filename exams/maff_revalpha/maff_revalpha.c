#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char upper;
	char lower;

	upper = 'Y';
	lower = 'z';
	while(lower >= 'b' || upper >= 'A')
	{
		putchar(lower);
		putchar(upper);
		upper -= 2;
		lower -= 2;
	}
	putchar('\n');
}
			
