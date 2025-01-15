


#include "push_swap.h"

t_element *get_last(t_element *first)
{
	while (first)
		first = first->next;
	return first;
}
