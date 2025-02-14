/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:30:20 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:30:21 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_listutil	*manip_sa(t_listutil *listutil)
{
	t_element	*last;
	t_element	*pre_last;
	t_value		*temp_val;

	ft_printf("sa\n");
	last = listutil->taila;
	pre_last = get_prev_l(last);
	if (last->value && pre_last->value)
	{
		temp_val = last->value;
		last->value = pre_last->value;
		pre_last->value = temp_val;
		return (listutil);
	}
	return (NULL);
}

t_listutil	*manip_sb(t_listutil *listutil)
{
	t_element	*last;
	t_element	*pre_last;
	t_value		*temp_val;

	ft_printf("sb\n");
	last = listutil->tailb;
	pre_last = get_prev_l(last);
	if (last->value && pre_last->value)
	{
		temp_val = last->value;
		last->value = pre_last->value;
		pre_last->value = temp_val;
		return (listutil);
	}
	return (NULL);
}

t_listutil	*manip_ss(t_listutil *listutil)
{
	ft_printf("ss\n");
	listutil = manip_sa(listutil);
	if (!listutil)
		return (listutil);
	listutil = manip_sb(listutil);
	if (!listutil)
		return (listutil);
	return (listutil);
}
