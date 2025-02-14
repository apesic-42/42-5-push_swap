/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_listutil.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:34:13 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:34:14 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_element	*get_last_element(t_element *head)
{
	t_element	*current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

t_listutil	*create_listutil(t_element *first_a)
{
	t_listutil	*new_listutil;

	new_listutil = (t_listutil *)ft_calloc(sizeof(t_listutil), 1);
	if (!new_listutil)
		return (NULL);
	new_listutil->heada = first_a;
	new_listutil->taila = get_last_element(first_a);
	new_listutil->sizea = get_size(first_a);
	new_listutil->sizeb = 0;
	return (new_listutil);
}

t_listutil	*init_list(int ac, char **av)
{
	t_element	*first_a;
	t_listutil	*listutil;

	first_a = put_list_in_struct(ac, av);
	if (!first_a)
		return (NULL);
	av = cache_sorte(ac, av);
	listutil = create_listutil(first_a);
	if (!listutil)
	{
		free_list(first_a);
		return (NULL);
	}
	listutil = link_cachliste_and_linked_list(listutil, av);
	listutil = get_max_lenght(listutil);
	return (listutil);
}
