#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int main(int argc, char **argv)
{
	int nbr;
	char base[100];

	if (argc != 3)
	{
		printf("Usage : ./a.out nbr base");
		return (1);
	}
	nbr = atoi(argv[1]);
	strcpy(base, argv[2]);
	ft_putnbr_base(nbr, base);
}
