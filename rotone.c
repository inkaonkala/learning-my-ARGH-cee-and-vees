/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:53:59 by iniska            #+#    #+#             */
/*   Updated: 2024/01/04 16:13:21 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char c)
{
	if (c == 'z')
    {
        write (1, "a", 1);
        return;
    }
	if (c == 'Z')
    {
		write (1, "A", 1);
        return ;
    }
	else if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
	{
		c++;
		write(1, &c, 1);
	}
    else
        write (1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			rotone(*argv[1]++);
	}
	write (1, "\n", 1);
	return (0);
}
