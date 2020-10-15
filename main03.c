#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str);

int main(int argc, char **argv)
{
	char str[100];
	int nb;

	if (argc != 2)
	{
		printf("Usage : ./a.out str");
		return (1);
	}
	strcpy(str, argv[1]);
	nb = ft_atoi(str);
	printf("%d", nb);
}
