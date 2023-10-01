#include "ft_memset.c"
#include <stdio.h>

int	main(void)
{
	char	str[] = "hello world welcome\n";
	printf("%s",str);
	ft_memset(str + 6, '+', 4);
	printf("%s",str);
}