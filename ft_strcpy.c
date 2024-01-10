/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:50:53 by iniska            #+#    #+#             */
/*   Updated: 2024/01/04 13:22:21 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	if (!src || !len)
		return (0);
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}

	return (dst);
}

