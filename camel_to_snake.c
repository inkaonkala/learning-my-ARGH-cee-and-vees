
#include <unistd.h>

void cts(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		write(1, "_", 1);
		c += 32;
	}
    write(1, &c, 1);
}

int main(int ac, char **av)
{
	int	i;

	
	if (ac == 2)
	{
		while (*av[1])
			cts(*av[1]++);
	}
	write(1, "\n", 1);
	return (0);
}
