/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:00:59 by iniska            #+#    #+#             */
/*   Updated: 2024/01/29 09:54:36 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	revprint(char *av)
{
	int i;

	i = 0;
	while (av[i] != '\0')
		i++;
	while (i >= 0)
	{
		write(1, &av[i], 1);
		i--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		revprint(av[1]);
	write(1, "\n", 1);
	return (0);
}

