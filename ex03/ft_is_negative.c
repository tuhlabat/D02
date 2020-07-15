#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c);
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n);
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
