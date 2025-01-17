

#include "push_swap.h"

void print_valuee(const t_value *v) {
    printf("Signe: %s\n", v->signe ? "Positif" : "Négatif");
    printf("Chiffres: %u %u %u %u %u %u %u %u %u %u\n",
           v->c1, v->c2, v->c3, v->c4, v->c5, v->c6, v->c7, v->c8, v->c9, v->c10);
}




t_listutil 	*manip_rra(t_listutil *listutil)
{
	t_element *last_a;
	t_element *first_a;
	t_element *temp;

	ft_printf("rra\n");
	last_a = listutil->taila;
	first_a = listutil->heada;
	temp = first_a->next;


	if (last_a != NULL && first_a != NULL && first_a != last_a)
	{
		first_a->prev = last_a;
		last_a->next = first_a;
		temp->prev = NULL;
		first_a->next = NULL;
		listutil->heada= temp;
		listutil->taila = first_a;
	}
	return (listutil);
}
