
#include <unistd.h>


int main(int ac, char **av)
{
	if (ac == 2)
	{
			while (*av[1] == ' ' || *av[1] == '\t')
				av[1]++;
			while (*av[1])
			{

				while (*av[1] != ' ' && *av[1] != '\t' && *av[1] != '\0')
				{	
					write(1, av[1], 1);
					av[1]++;
				}
				while (*av[1] == ' ' || *av[1] == '\t')
					av[1]++;
				if (*av[1] != '\0')
					write(1, "   ", 3);
			}
	}
	write(1, "\n", 1);
	return (0);
}
