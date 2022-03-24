#include <unistd.h>

void ft_print_numbers(void)
{
	write(1, "1234567890\n", 11);
}

int main(void)
{
	ft_print_numbers();
}
