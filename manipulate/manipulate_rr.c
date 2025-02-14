/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:30:09 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:30:10 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_listutil	*manip_rra(t_listutil *listutil)
{
	t_element	*premier_a;
	t_element	*dernier_a;
	t_element	*temp;

	ft_printf("rra\n");
	dernier_a = listutil->heada;
	premier_a = listutil->taila;
	temp = dernier_a->next;
	if (premier_a != NULL && dernier_a != NULL && dernier_a != premier_a)
	{
		dernier_a->prev = premier_a;
		premier_a->next = dernier_a;
		temp->prev = NULL;
		dernier_a->next = NULL;
		listutil->heada = temp;
		listutil->taila = dernier_a;
	}
	return (listutil);
}

t_listutil	*manip_rrb(t_listutil *listutil)
{
	t_element	*premier_b;
	t_element	*dernier_b;
	t_element	*temp;

	ft_printf("rrb\n");
	dernier_b = listutil->headb;
	premier_b = listutil->tailb;
	temp = dernier_b->next;
	if (premier_b != NULL && dernier_b != NULL && dernier_b != premier_b)
	{
		dernier_b->prev = premier_b;
		premier_b->next = dernier_b;
		temp->prev = NULL;
		dernier_b->next = NULL;
		listutil->headb = temp;
		listutil->tailb = dernier_b;
	}
	return (listutil);
}
