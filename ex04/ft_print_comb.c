#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	for (a = '0';a <= '9'; ++a)
	{
		for (b = '0';b <= '9'; ++b)
		{
			for (c = '0';c <= '9'; ++c)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
			}
		}
	}
}
