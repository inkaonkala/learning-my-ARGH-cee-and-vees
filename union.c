#include <unistd.h>

int	seen(char *str, char c)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	unio(char *str1, char *str2)
{
	char	chk[142] = {0};
	int i = 0;
	int j = 0;

	while(str1[i] != '\0')
	{
		if(!seen(chk, str1[i]))
		{
			chk[j] = str1[i];
			write(1, &str1[i], 1);
			j++;
		}
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		if(!seen(chk, str2[i]))
		{
			chk[j] = str2[i];
			write(1, &str2[i], 1);
			j++;
		}
		i++;
	}
}
			

int main(int arc, char **arv)
{
	if(arc == 3)
	{
		unio(arv[1], arv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
