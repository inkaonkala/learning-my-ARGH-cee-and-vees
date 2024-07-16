#include <unistd.h>

int strlenn(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	return (i);
}

int main(int arc, char **arv)
{
	int i = 0;
	int j = 0;
	int check = 0;

	if(arc == 3)
	{
		while(arv[1][i] != '\0')
		{
			while (arv[2][j] != '\0')
			{
				if(arv[2][j] == arv[1][i])
				{
					i++;
					check++;
				}
				j++;
			}
			i++;
		}
		if((strlenn(arv[1]) - check) == 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);	


	}
	write(1, "\n", 1);
	return (0);
}
