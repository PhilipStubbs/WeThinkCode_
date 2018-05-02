#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int i;
	int id;
	unsigned char *p;

	p = str;
	id = n;
	i = 0;
	while(i <= id)
	{
		p[i++] = c;
	}
	return(p);
}



int main () 
{
   char str[50];


   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}