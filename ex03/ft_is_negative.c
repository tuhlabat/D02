#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c);
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main (){
	char n;
	if(n < 0)
	{
		ft_putchar('N');
	}
	else
	{ 
		ft_putchar('P');
	}
	return (0);
}
