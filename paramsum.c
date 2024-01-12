/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:48:30 by iniska            #+#    #+#             */
/*   Updated: 2024/01/12 15:12:19 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int n)
{
	char num;

	if (n >= 10)
		ft_putnum(n / 10);
	num = (n % 10) + '0';
	write(1, &num, 1);
}

int	main(int ac, char **av)
{

	ft_putnum(ac - 1);
	write (1, "\n", 1);
	return (0);
}
