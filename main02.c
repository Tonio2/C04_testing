#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int main(int argc, char **argv)
{
	int nb;

	if (argc != 2)
	{
		printf("Usage : ./a.out nb");
		return (1);
	}
	nb = atoi(argv[1]);
	ft_putnbr(nb);
}
