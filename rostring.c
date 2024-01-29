/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:20:00 by iniska            #+#    #+#             */
/*   Updated: 2024/01/29 15:42:39 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rostring(char *av)
{
	int i;
	int j;

	i = 0;
	while (av[i] == ' ' || av[i] == '\t')
		i++;
	j = i;
	while (av[j] != ' ' &&	av[j] != '\t' && av[j] != '\0')
		j++;
	while ((av[j] == ' ' || av[j] == '\t') && av[j] != '\0')
		j++;
	if (av[j] != '\0')
	{
		while (av[j] != '\0')
		{
			if (av[j] != ' ' && av[j] != '\t')
			{
				write(1, &av[j], 1);
				if (av[j + 1] == ' ' || av[j + 1] == '\t')
					write (1, " ", 1);
			}
			j++;
		}
		j--;
		if (av[j] != ' ')
			write (1, " ", 1);
	}
	while (av[i] != ' ' && av[i] != '\t' && av[i] != '\0')
	{
		write(1, &av[i], 1);
		i++;
	}
}


int main(int ac, char **av)
{
	if (ac >= 2)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}

