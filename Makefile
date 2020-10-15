all: prgm00 prgm01 prgm02 prgm03 prgm04 prgm04 prgm05

prgm00 : ../ex00/ft_strlen.c main00.c
	gcc -Wall -Wextra -Werror main00.c ../ex00/ft_strlen.c -o prgm00

prgm01 : ../ex01/ft_putstr.c main01.c
	gcc -Wall -Wextra -Werror main01.c ../ex01/ft_putstr.c -o prgm01

prgm02 : ../ex02/ft_putnbr.c main02.c
	gcc -Wall -Wextra -Werror main02.c ../ex02/ft_putnbr.c -o prgm02

prgm03 : ../ex03/ft_atoi.c main03.c
	gcc -Wall -Wextra -Werror main03.c ../ex03/ft_atoi.c -o prgm03

prgm04 : ../ex04/ft_putnbr_base.c main04.c
	gcc -Wall -Wextra -Werror main04.c ../ex04/ft_putnbr_base.c -o prgm04

prgm05 : ../ex05/ft_atoi_base.c main05.c
	gcc -Wall -Wextra -Werror main05.c ../ex05/ft_atoi_base.c -o prgm05
