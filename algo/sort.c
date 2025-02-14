/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:42:25 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:42:26 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_listutil	*algo_sort(t_listutil *listutil)
{
	int			i;
	t_element	*firsta;
	int			j;
	int			size;

	size = listutil->sizea;
	i = 0;
	if (size <= 5)
		return (algo_sort_5(listutil));
	while (i < listutil->max_lenght && is_sorted_total(listutil) == false)
	{
		j = 0;
		while (j++ < size && is_sorted_total(listutil) == false)
		{
			firsta = listutil->taila;
			if (((firsta->value->fake_value >> i) & 1) == 1)
				listutil = manip_ra(listutil);
			else
				listutil = manip_pb(listutil);
		}
		while (listutil->sizeb != 0)
			listutil = manip_pa(listutil);
		i++;
	}
	return (listutil);
}
