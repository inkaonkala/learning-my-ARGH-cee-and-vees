/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:14:48 by iniska            #+#    #+#             */
/*   Updated: 2024/01/29 10:44:59 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int i;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		i = a;
	else
		i = b;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
		   return (i);
		i++;
	}
}

/*
#include <stdio.h>

int main()
{
	int a = 3;
	int b = 6;
	int s = lcm(a, b);
    printf("%d", s);
	return (0);
}
*/	
