/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:27:14 by iniska            #+#    #+#             */
/*   Updated: 2024/07/18 13:25:43 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     maken(char *str)
{
        int i = 0;
        int num = 0;

        while (str[i] != '\0')
        {
                num = (num * 10) + (str[i] - '0');
                i++;
        }
        return (num);
}

void    putnum(int n)
{
        char str[10] = "0123456789";
        if (n > 9)
                putnum(n / 10);
        write(1, &str[n % 10], 1);
}

int is_prime(n)
{
	int i = 2;
	
	if (n <= 1)
		return (1);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void    sum(int n)
{
        int i = 2;
        int t = 0;

        while ( i <= n)
        {
                if (is_prime(i))
                        t += i;
                i++;
        }
        putnum(t);
}

int main(int arc, char **arv)
{
        int n;

        if (arc == 2)
        {
                n = maken(arv[1]);
                sum(n);
        }
        else
                write(1, "0", 1);
        write(1, "\n", 1);
        return (0);
}

