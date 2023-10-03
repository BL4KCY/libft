
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"
#include <limits.h>

int main(void)
{
	int fd;
	if ((fd = open("4.txt", O_CREAT | O_APPEND | O_RDWR)) == -1)
	{
		puts("error");
		exit(-1);
	}
	ft_putnbr_fd(INT_MIN , fd);
	ft_putnbr_fd(INT_MAX , fd);
	ft_putnbr_fd(0 , fd);

	close(fd);
}