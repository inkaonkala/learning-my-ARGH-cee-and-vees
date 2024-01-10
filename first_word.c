/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:04:45 by iniska            #+#    #+#             */
/*   Updated: 2024/01/04 11:14:32 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *txt)
{
	int	i;
	
	if (!txt)
		return ;
	i = 0;
	while (txt[i] != ' ' && txt[i] != '\0')
	{
		ft_putchar(txt[i]);
		i++;
	}
	ft_putchar('\n');
}

int main()
{
	char *txt;

	txt = "kuolematon kala on elossa";
	ft_first_word(txt);
	return(0);
}
