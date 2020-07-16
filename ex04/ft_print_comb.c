#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_print_comb(void)
{
	int a = '0';
	int b = '0';
	int c ='0';
	
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					printf("%d\n", a, b, c);
				c++;
				}
		}
			c = '0';
			b++;
	}
		b = '0';
		a++;
	}
}
