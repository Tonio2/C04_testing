#include <string.h>
#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(int argc, char **argv)
{
	char str[100];
	char base[100];
	int nb;
	
	if (argc != 3)
	{
		printf("Usage : ./a.out str base");
		return (1);
	}
	strcpy(str, argv[1]);
	strcpy(base, argv[2]);
	nb = ft_atoi_base(str, base);
	printf("%d", nb);
}
