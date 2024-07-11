#include <unistd.h>

void	re_al(char c)
{
	int	rep;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		if (c >= 'a' && c <= 'z')
			rep = c - 'a';
		else
			rep = c - 'A';
		while (rep >= 0)
		{
			write(1, &c, 1);
			rep--;
		}
	}			
	else
		write(1, &c, 1);
}

int main(int arc, char **arv)
{
	int	i;

	i = 0;
	if (arc == 2)
	{
		while(arv[1][i] != '\0')
			re_al(arv[1][i++]);	
	}
	write(1, "\n", 1);
}
