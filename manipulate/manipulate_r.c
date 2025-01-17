

#include "push_swap.h"





t_listutil 	*manip_ra(t_listutil *listutil)
{
	t_element *last_a;
	t_element *first_a;
	t_element *temp;

	ft_printf("ra\n");
	last_a = listutil->taila;
	first_a = listutil->heada;
	temp = last_a->prev;
	if (last_a != NULL && first_a != NULL && first_a != last_a)
	{
		last_a->prev = NULL;
		last_a->next = first_a;
		first_a->prev = last_a;
		temp->next = NULL;
		listutil->heada = last_a;
		listutil->taila= temp;
	}
	return (listutil);
}


t_listutil 	*manip_rb(t_listutil *listutil)
{
	t_element *last_b;
	t_element *first_b;
	t_element *temp;

	ft_printf("rb\n");
	last_b = listutil->tailb;
	first_b = listutil->headb;
	temp = last_b->prev;
	if (last_b != NULL && first_b != NULL && first_b != last_b)
	{
		last_b->prev = NULL;
		last_b->next = first_b;
		first_b->prev = last_b;
		temp->next = NULL;
		listutil->headb = last_b;
		listutil->tailb= temp;
	}
	return (listutil);
}


t_listutil 	*manip_rr(t_listutil *listutil)
{
	manip_ra(listutil);
	manip_rb(listutil);
	return (listutil);
}
