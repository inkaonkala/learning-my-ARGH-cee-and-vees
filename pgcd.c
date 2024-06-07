#include <stdio.h>
#include <stdlib.h>

void	pgcd(int nb1, int nb2)
{
	int	divider;
	int i;

	divider = 1;
	if (nb1 <= 0 || nb2 <= 0)
		return ;
	while (divider <= nb1 || divider <= nb2)
	{
		if (nb1 % divider == 0 && nb2 % divider == 0)
			i = divider;
		divider++;
	}
	printf("%d", i);
}

int main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return	(0);
}
