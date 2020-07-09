#include <unistd.h>
int main()
{
         write(1, "abcdefghijklnmopqrstuvwxyz\0", 26);
		 return(0);
}		 
