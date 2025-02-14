/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:42:38 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:42:40 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_distance(t_element *element, int val)
{
	t_element	*cur;
	int			distance;

	distance = 0;
	cur = element;
	while (cur)
	{
		if (cur->value->fake_value == val)
			break ;
		distance++;
		cur = cur->prev;
	}
	return (distance);
}

static t_listutil	*sort_3(t_listutil *listutil)
{
	t_element	*firsta;
	t_element	*seconda;
	t_element	*thirda;

	firsta = listutil->taila;
	seconda = firsta->prev;
	thirda = seconda->prev;
	if (is_min(firsta->value->fake_value, listutil) == true
		&& is_max(seconda->value->fake_value, listutil) == true)
		return (manip_rra(manip_sa(manip_ra(listutil))));
	if (is_max(firsta->value->fake_value, listutil) == true
		&& is_min(seconda->value->fake_value, listutil) == true)
		return (manip_ra(listutil));
	if (is_max(firsta->value->fake_value, listutil) == true
		&& is_min(thirda->value->fake_value, listutil) == true)
		return (manip_sa(manip_ra(listutil)));
	if (is_max(seconda->value->fake_value, listutil) == true
		&& is_min(thirda->value->fake_value, listutil) == true)
		return (manip_rra(listutil));
	if (is_max(thirda->value->fake_value, listutil) == true
		&& is_min(seconda->value->fake_value, listutil) == true)
		return (manip_sa(listutil));
	return (listutil);
}

static t_listutil	*sort_4(t_listutil *listutil)
{
	int	distance;

	if (is_sorted_total(listutil) == true)
		return (listutil);
	distance = get_distance(listutil->taila, get_min_of_list(listutil->taila,
				-1));
	if (distance == 1)
		listutil = manip_ra(listutil);
	else if (distance == 2)
		listutil = manip_ra(manip_ra(listutil));
	else if (distance == 3)
		listutil = manip_rra(listutil);
	if (is_sorted_total(listutil) == true)
		return (listutil);
	listutil = manip_pb(listutil);
	listutil = sort_3(listutil);
	listutil = manip_pa(listutil);
	return (listutil);
}

static t_listutil	*sort_5(t_listutil *listutil)
{
	int	distance;

	distance = get_distance(listutil->taila, get_min_of_list(listutil->taila,
				-1));
	if (distance == 1)
		listutil = manip_ra(listutil);
	else if (distance == 2)
		listutil = manip_ra(manip_ra(listutil));
	else if (distance == 3)
		listutil = manip_rra(manip_rra(listutil));
	else if (distance == 4)
		listutil = manip_rra(listutil);
	if (is_sorted_total(listutil) == true)
		return (listutil);
	listutil = manip_pb(listutil);
	listutil = sort_4(listutil);
	listutil = manip_pa(listutil);
	return (listutil);
}

t_listutil	*algo_sort_5(t_listutil *listutil)
{
	int	size;

	size = listutil->sizea;
	if (is_sorted_total(listutil) == true)
		return (listutil);
	if (size == 2)
		return (manip_sa(listutil));
	else if (size == 3)
		return (sort_3(listutil));
	else if (size == 4)
		return (sort_4(listutil));
	else if (size == 5)
		return (sort_5(listutil));
	return (listutil);
}
