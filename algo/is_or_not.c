
#include "push_swap.h"




bool is_sorted_total(t_listutil *listutil)
{
	t_element *current;

	if (listutil->sizeb != 0 || listutil->sizea == 0)
		return (false);
	current = listutil->taila;
    while (current->prev != NULL)
	{
        if (current->value->fake_value > current->prev->value->fake_value)
            return (false);
        current = current->prev;
    }
	return (true);
}
