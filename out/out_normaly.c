/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_normaly.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:28:46 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:28:48 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*clean_exit_init(t_element *first)
{
	free_list(first);
	return (NULL);
}

void	free_list(t_element *head)
{
	t_element	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		if (tmp->value != NULL)
			free(tmp->value);
		free(tmp);
	}
}

void	out_normaly(t_listutil *listutil)
{
	t_element	*heada;
	t_element	*headb;

	if (listutil->heada != NULL)
	{
		heada = listutil->heada;
		listutil->heada = NULL;
		free_list(heada);
	}
	free(listutil);
}
