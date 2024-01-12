/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:39:31 by iniska            #+#    #+#             */
/*   Updated: 2024/01/12 14:41:30 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*
 so, because char is 8 byte, 8 / 2 = 4
 the we move the right side >> 4 steps, so 01000001 ==> 0001000
 
 then we move the other side << 4 steps, so 01000001 ==> 00000001
 
 | line is combining them both, so we get the right line ==> 00010001
 */
