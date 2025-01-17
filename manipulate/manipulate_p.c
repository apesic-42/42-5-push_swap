

#include "push_swap.h"

// t_listutil 				*manip_pa(t_listutil *listutil)
// {
// 	t_element *last_a;
// 	t_element *last_b;
// 	t_value	*temp_val;

// 	ft_printf("pa\n");
// 	last_b = listutil->tailb;
// 	last_a = listutil->taila;
// 	if (last_b != NULL && last_a != NULL && last_a->value && last_b->value)
// 	{
// 		last_b-> = last_a->value;
// 		last->value = pre_last->value;
// 		pre_last->value = temp_val;
// 	}
// 	return (listutil);
// }

static void init_listutil(t_element *last_1, t_element *pre_last, t_element *last_2)
{
	if (pre_last != NULL)
			pre_last->next = NULL;
	if (last_2 != NULL)
	{
		last_1->prev = last_2;
		last_2->next = last_1;
	}
}

t_listutil 				*manip_pb(t_listutil *listutil)
{
	t_element *last_a;
	t_element *last_b;
	t_element *pre_last_a;

	ft_printf("pb\n");
	last_a = listutil->taila;
	last_b = listutil->tailb;
	pre_last_a = get_prev_l(last_a);
	if (last_a != NULL)
	{
		init_listutil(last_a, pre_last_a, last_b);
		if (last_b == NULL)
			listutil->headb = last_a;
		listutil->taila = pre_last_a;
		listutil->tailb = last_a;
		listutil->sizea --;
		listutil->sizeb ++;
	}
	return (listutil);
}

t_listutil 				*manip_pa(t_listutil *listutil)
{
	t_element *last_b;
	t_element *last_a;
	t_element *pre_last_b;

	ft_printf("pb\n");
	last_b = listutil->tailb;
	last_a = listutil->taila;
	pre_last_b = get_prev_l(last_b);
	if (last_b != NULL)
	{
		init_listutil(last_b, pre_last_b, last_a);
		if (last_a == NULL)
			listutil->heada = last_b;
		listutil->tailb = pre_last_b;
		listutil->taila = last_b;
		listutil->sizeb --;
		listutil->sizea ++;
	}
	return (listutil);
}
