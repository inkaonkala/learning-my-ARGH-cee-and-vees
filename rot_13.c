#include <unistd.h>

void	rot(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
		c += 13;
		write(1, &c, 1);
		return ;
	}
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
		c -= 13;
		write(1, &c, 1);
		return ;
	}
	else
		write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while(*av[1])
			rot(*av[1]++);
	}
	write(1, "\n", 1);
	return (0);
}

