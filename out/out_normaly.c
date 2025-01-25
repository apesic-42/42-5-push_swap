

#include "push_swap.h"

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
	// t_element *heada;
	// t_element *headb;

	// printf("ok\n");
	// if (listutil->heada != NULL)
	// {
	// 	heada = listutil->heada;
	// 	listutil->heada = NULL;
	// 	free_list(heada);
	// 	printf("ok1\n");
	// }
	// if (listutil->headb == NULL)
	// 	printf("oake");
	// if (listutil->headb != NULL)
	// {
	// 	headb = listutil->headb;
	// 	listutil->headb = NULL;
	// 	free_list(headb);
	// 	printf("ok2\n");
	// }
	// free(listutil);
}
