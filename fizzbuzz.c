/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:14:54 by iniska            #+#    #+#             */
/*   Updated: 2024/01/04 12:50:29 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	nmb(int i)
{
	char str[10] = "0123456789";

	if (i > 9)
			nmb(i / 10);
	write (1, &str[i % 10], 1);
}	

int	main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			nmb(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
