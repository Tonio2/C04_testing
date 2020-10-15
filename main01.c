#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage : ./a.out str");
		return (1);
	}
	char str[100];
	strcpy(str, argv[1]);
	ft_putstr(str);
}
