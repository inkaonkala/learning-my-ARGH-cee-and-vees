/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:33:47 by iniska            #+#    #+#             */
/*   Updated: 2024/01/29 13:24:40 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void printlast(char *av)
{
    int i = 0;

    while (av[i] != '\0')
        i++;

    while ((av[i - 1] == ' ' || av[i - 1] == '\t') && i > 0)
        i--;

    while (av[i - 1] != ' ' && av[i - 1] != '\t' && i > 0)
        i--;
  	while ((av[i] != ' ' && av[i] != '\t') && av[i] != '\0')
	{
		write(1, &av[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printlast(av[1]);
	write(1, "\n", 1);
	return (0);
}

