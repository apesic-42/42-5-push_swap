/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:29:38 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:29:39 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_listutil	*pb_court(t_element *premier_a, t_element *premier_b,
		t_listutil *listutil)
{
	t_element	*pre_premier_a;

	pre_premier_a = premier_a->prev;
	if (pre_premier_a != NULL)
		pre_premier_a->next = NULL;
	if (premier_b != NULL)
	{
		premier_a->prev = premier_b;
		premier_b->next = premier_a;
	}
	else
	{
		premier_a->prev = NULL;
		listutil->headb = premier_a;
	}
	premier_a->next = NULL;
	listutil->taila = pre_premier_a;
	listutil->tailb = premier_a;
	listutil->sizea--;
	listutil->sizeb++;
	return (listutil);
}

t_listutil	*manip_pb(t_listutil *listutil)
{
	t_element	*premier_a;
	t_element	*premier_b;

	ft_printf("pb\n");
	premier_a = listutil->taila;
	premier_b = listutil->tailb;
	if (premier_a != NULL)
		listutil = pb_court(premier_a, premier_b, listutil);
	return (listutil);
}

static t_listutil	*pa_court(t_element *premier_b, t_element *premier_a,
		t_listutil *listutil)
{
	t_element	*pre_premier_b;

	pre_premier_b = premier_b->prev;
	if (pre_premier_b != NULL)
		pre_premier_b->next = NULL;
	if (premier_a != NULL)
	{
		premier_b->prev = premier_a;
		premier_a->next = premier_b;
	}
	else
	{
		premier_b->prev = NULL;
		listutil->headb = premier_b;
	}
	premier_b->next = NULL;
	listutil->tailb = pre_premier_b;
	listutil->taila = premier_b;
	listutil->sizeb--;
	listutil->sizea++;
	return (listutil);
}

t_listutil	*manip_pa(t_listutil *listutil)
{
	t_element	*premier_b;
	t_element	*premier_a;

	ft_printf("pa\n");
	premier_b = listutil->tailb;
	premier_a = listutil->taila;
	if (premier_b != NULL)
		listutil = pa_court(premier_b, premier_a, listutil);
	return (listutil);
}
