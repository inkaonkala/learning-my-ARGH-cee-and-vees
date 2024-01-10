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
#include <stdlib.h>

void	fizzbuzz(int i)
{		
	char	*nmb;
	int		len;

	len = 0;
	if (i >= 1 && i <= 100)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			nmb = (char *)malloc(12);
			if (!nmb)
				return ;
			while (i > 0)
			{
				nmb[len++] = i % 10 + '0';
				i /= 10;
			}
			while (len > 0)
				write(1, &nmb[--len], 1);
			write(1, "\n", 1);
			free(nmb);
			return ;
		}
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz\n", 9);
		if (i % 3 == 0)
			write(1, "fizz\n", 4);
		if (i % 5 == 0)
			write (1, "buzz\n", 4);
	}
}

int main()
{
	int nmb = 98;
	fizzbuzz(nmb);
	return (0);
}
