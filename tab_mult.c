#include <unistd.h>

int	fatoi(char *str)
{
	int res = 0;
	int sign = 1;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(int arc, char **arv)
{
	int	i = 1;
	int	nbr;

	if (arc != 2)
		write (1, "\n", 1);
	else
	{
		nbr = fatoi(arv[1]);
		while (i <= 9 && nbr <= 238609183)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(nbr);
			write (1, " = ", 3);
			ft_putnbr(i * nbr);
			write (1, "\n", 1);
			i += 1;
		}
	}
}
