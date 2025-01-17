
#include "push_swap.h"

static t_element* get_last_element(t_element *head) {
    if (head == NULL)
        return NULL;
    t_element *current = head;
    while (current->next != NULL)
        current = current->next;
    return (current);
}



t_listutil *create_listutil(t_element *first_a)
{
	t_listutil *new_listutil;


	new_listutil = (t_listutil *)ft_calloc(sizeof(t_listutil), 1);
	if (!new_listutil)
		return (NULL);
	new_listutil->heada = first_a;
	new_listutil->taila = get_last_element(first_a);
	new_listutil->sizea = get_size(first_a);
	new_listutil->sizeb = 0;
	return (new_listutil);
}
