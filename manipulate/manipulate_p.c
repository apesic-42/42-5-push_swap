

#include "push_swap.h"


static void init_listutil(t_element *last_1, t_element *pre_last, t_element *last_2)
{
	if (pre_last != NULL)
			pre_last->next = NULL;
	if (last_2 != NULL)
	{
		last_1->next = last_2;
		last_2->prev = last_1;
	}
}

t_listutil 				*manip_pb(t_listutil *listutil)
{
	t_element *first_a;
	t_element *first_b;
	t_element *pre_first_a;

	ft_printf("pb\n");
	first_a = listutil->heada;
	first_b = listutil->headb;
	pre_first_a = get_next_l(first_a);
	if (first_a != NULL)
	{
		init_listutil(first_a, pre_first_a, first_b);
		if (first_b == NULL)
			listutil->headb = first_a;
		listutil->heada = pre_first_a;
		listutil->headb = first_a;
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
