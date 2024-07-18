#include <unistd.h>

void	uls(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		write(1, &c, 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		write(1, &c, 1);
	}
	else
		write(1, &c, 1);
}

int main(int arc, char **arv)
{
	int i = 0;

	if (arc == 2)
	{
		while(arv[1][i] != '\0')
		{
			uls(arv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
