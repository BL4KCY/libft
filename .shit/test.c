#include <stdio.h>
#include "ft_memset.c"


int main(void)
{
	char str[100];
	char *ptr= str;

	ptr = ft_memset(ptr, '1', 10);

	printf("%s\n",str);

}