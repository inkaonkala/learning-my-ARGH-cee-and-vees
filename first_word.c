/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:27:44 by iniska            #+#    #+#             */
/*   Updated: 2024/01/29 11:30:22 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	firstw(char *av)
{
	int	i;

	i = 0;
	while (av[i] == ' ' || av[i] == '\t')
		i++;
	while (av[i] != ' ' && av[i] != '\t' && av[i] != '\0')
	{
		write(1, &av[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		firstw(av[1]);
	write(1, "\n", 1);
	return (0);
}		

