

#include "push_swap.h"


void *clean_exit_init(t_element *first)
{
	while (first)
	{
		t_element *tmp = first;
		first = first->next;
		free(tmp);
	}
	return NULL;
}
