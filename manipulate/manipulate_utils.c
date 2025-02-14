/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:30:31 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:30:33 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	get_size(t_element *first)
{
	size_t	i;

	i = 0;
	while (first)
	{
		first = first->next;
		i++;
	}
	return (i);
}

t_element	*get_next_l(t_element *element)
{
	if (element->next != NULL)
		element = element->next;
	return (element);
}

t_element	*get_prev_l(t_element *element)
{
	if (element->prev != NULL)
		element = element->prev;
	return (element);
}
