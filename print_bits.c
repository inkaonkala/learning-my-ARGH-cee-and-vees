/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:05:57 by iniska            #+#    #+#             */
/*   Updated: 2024/01/29 10:13:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				count;
	unsigned char	bit;

	count = 8;
	while (count--)
	{
		bit = (octet >> count & 1) + '0';
		write(1, &bit, 1);
	}
}

