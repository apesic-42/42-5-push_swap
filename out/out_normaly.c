

#include "push_swap.h"

static void print_value(const t_value *v) {
  printf("          -- vrais: %d | fausse : %u\n", v->true_value,
         v->fake_value);
}

void free_list(t_element *head)
{
	t_element *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		if (tmp->value != NULL)
			free(tmp->value);
		free(tmp);
	}
}

void out_normaly(t_listutil *listutil)
{
	t_element *heada;
	t_element *headb;

	if (listutil->heada != NULL)
	{
		heada = listutil->heada;
		listutil->heada = NULL;
		free_list(heada);
	}
	free(listutil);
}
