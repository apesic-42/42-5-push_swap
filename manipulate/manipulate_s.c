

#include "push_swap.h"

t_element *manip_sa(t_element *first, t_listutil *listutil)
{
	t_element *last;
	t_element *pre_last;
	t_value	*temp_val;

	ft_printf("sa\n");
	last = listutil->tail;
	last = get_prev_l(last, true);
	pre_last = get_prev_l(last->prev, true);
	if (last->value && pre_last->value)
	{
		temp_val = last->value;
		last->value = pre_last->value;
		pre_last->value = temp_val;
		return (first);
	}
	return NULL;
}

t_element *manip_sb(t_element *first, t_listutil *listutil)
{
	t_element *last;
	t_element *pre_last;
	t_value	*temp_val;

	ft_printf("sb\n");
	last = listutil->tail;
	last = get_prev_l(last, false);
	pre_last = get_prev_l(last->prev, false);
	if (last->value && pre_last->value)
	{
		temp_val = last->value;
		last->value = pre_last->value;
		pre_last->value = temp_val;
		return (first);
	}
	return NULL;
}

t_element *manip_ss(t_element *first, t_listutil *listutil)
{
	ft_printf("ss\n");
	manip_sa(first, listutil);
	if (!first)
		return (NULL);
	manip_sb(first, listutil);
	if (!first)
		return (NULL);
	return (first);
}
