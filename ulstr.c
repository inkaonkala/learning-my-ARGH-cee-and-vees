/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:35:13 by iniska            #+#    #+#             */
/*   Updated: 2024/01/05 14:49:20 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char c)
{
	if (!c)
		return ;
	if (c >= 'A' && c <= 'Z')
		c += 32;
	else if (c >= 'a' && c <= 'z')
		c -= 32;
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			ulstr(*argv[1]++);
	}
	write (1, "\n", 1);
	return (0);
}
