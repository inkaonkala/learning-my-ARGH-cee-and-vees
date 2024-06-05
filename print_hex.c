/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:41:47 by iniska            #+#    #+#             */
/*   Updated: 2024/06/05 17:46:20 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    printhex(int i)
{
    char str[16] = "0123456789abcdef";
    if (i >= 16)
        printhex(i / 16);
    write(1, &str[i % 16], 1);
}

int    nmb(const char *arv)
{
    int result;
    
    result = 0;
    while (*arv >= '0' && *arv <= '9')
    {
        result = result * 10 + (*arv - '0');
        arv++;
    }
    return (result);
}

int main(int arc, char **arv)
{
    if (arc == 2)
        printhex(nmb(arv[1]));
    write(1, "\n", 1);
    return (0);
}
