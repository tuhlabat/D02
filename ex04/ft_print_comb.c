#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_print_comb(void)
{	int a, b, c, }

{
	char a = '0';
	char b = '0';
	char c = '0';
	ft_putchar(',');

	while (a < '9')
	{
		while (b < '9')
		{
			while (c < '9')
			{
				if (a < b && b < c){
					print(a, b, c);
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
	return (0);
}
