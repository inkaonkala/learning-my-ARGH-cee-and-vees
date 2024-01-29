
#include <unistd.h>

void	printhex(int n)
{
	char *hex;
	
    hex = "0123456789abcdef";
    if (n >= 16)
        printhex(n / 16);
    write(1, &hex[n % 16], 1);
}

int	changes(char *str)
{
	int	n;

	n = 0;
    /*
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		   || *str == '\f' || *str == '\r' || *str == '+')
		str++;
    if (*str == '\0' || *str == '-')
        return (-1);
	while((*str >= '0' && *str <= '9'))
     */
    while (*str != '\0')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return(n);
}

int main(int ac, char **av)
{
	if (ac == 2)
		printhex(changes(av[1]));
	write(1, "\n", 1);
	return (0);
}
