#include <unistd.h>

void ft_putchar(char c);

void ft_print_numbers(void) {
	char numbers = '0';
	while (numbers < '9')
    {
		ft_putchar(numbers);
		numbers++;
	}
}
void ft_putchar(char c) {
	write(1, &c, 1);
}
int main(void) {
	ft_print_numbers();
return (0);
}
