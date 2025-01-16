


#include "push_swap.h"



size_t get_size(t_element *first)
{
	size_t i;

	i = 0;
	while (first)
	{
		first = first->next;
		i++;
	}
	return (i);
}

t_element *get_next_l(t_element *element, bool l)
{
	while (element->value->list != l)
		element = element->next;
	return (element);
}

t_element *get_prev_l(t_element *element, bool l)
{
	while (element->value->list != l)
		element = element->prev;
	return (element);
}
