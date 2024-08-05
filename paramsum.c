#include <unistd.h>

void	writenmb(int n)
{
	char	num;

	if (n >= 10)
		writenmb(n / 10);
	num = (n % 10) + '0';
	write(1, &num, 1);
}




int main(int arc, char **arv)
{
	
	(void)arv;

	if(arc == 1)
		write(1, "0", 1);
	else if (arc >= 2)
		writenmb(arc - 1);
	write(1, "\n", 1);
	return (0);
}
			
