#include "libft.h"
#include <stdio.h>
#include <string.h>

typedef struct Group_s
{
	char	name[20];
	int		age;
	char	grade;
	Group_t	next;
}Group_t;

int main(void)
{
	Group_t	E1;
	Group_t	e1 = E1;
	char	c;
	while (1)
	{
		puts("Enter \"name' 'age' 'grade\"");
		scanf("%s %d %c",E1.name,&E1.age,&E1.grade);
		puts("go next??");
		scanf("%c", &c);
		c = ft_tolower(c);
		if (c == 'y')
			E1 = E1.;
		else
		{
			E1.next = NULL;
			break;
		}	
	}
	while (e1.next != NULL)
	{
		printf("%s\n",e1.name);
		printf("%d\n",e1.age);
		printf("%c\n",e1.grade);
		e1 = e1.next;
	}
	return (0);
}
