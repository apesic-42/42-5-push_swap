

#include "push_swap.h"

t_element 				*manip_pa(t_element *first, t_listutil *listutil)
{
	t_element *last_a;
	t_element *last_b;
	t_value	*temp_val;

	ft_printf("sb\n");
	last_b = listutil->tail;
	last_b = get_prev_l(last_b, false);
	last_a = get_prev_l(last_b->prev, true);
	if (last_a->value && last_b->value)
	{
		temp_val = last_a->value;
		last->value = pre_last->value;
		pre_last->value = temp_val;
		return (first);
	}
	return NULL;
}
