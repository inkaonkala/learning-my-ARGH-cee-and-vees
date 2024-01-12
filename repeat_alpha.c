/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:59:09 by iniska            #+#    #+#             */
/*   Updated: 2024/01/12 13:33:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	counter(char c)
{
	char	*alphas;
	char	*alphab;
	int		i;

	i = 0;
	alphas = "abcdefghijklmnopqrstuvwxyz";
	alphab = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(c != alphas[i] && c != alphab[i])
			i++;
	return (i);
}

void	repeat_alpha(char c)
{
	int	i;

	i = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		i = counter(c);
		while (i >= 0)
		{
			write (1, &c, 1);
			i--;
		}
	}
	else
		write (1, &c, 1);
}


int main(int ac, char **av)
{
	if(ac == 2)
	{
		while(*av[1])
			repeat_alpha(*av[1]++);
	}
	write(1, "\n", 1);
	return(0);
}
