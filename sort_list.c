/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:46:58 by iniska            #+#    #+#             */
/*   Updated: 2024/01/29 11:01:31 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		move;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != NULL)
	{
		if(((*cmp)(lst->data, lst->next->data)) == 0)
		{
			move = lst->data;
			lst->data = lst->next->data;
			lst->next->data = move;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
