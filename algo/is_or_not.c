
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

bool is_min(int fake_value, t_listutil *listutils)
{
    t_element *cur;

    cur = listutils->heada;
    while (cur)
    {
        if (cur->value->fake_value < fake_value)
            return (false);
        cur = cur->next;
    }
    return (true);
}

bool is_max(int fake_value, t_listutil *listutils)
{
    t_element *cur;

    cur = listutils->heada;
    while (cur)
    {
        if (cur->value->fake_value > fake_value)
            return (false);
        cur = cur->next;
    }
    return (true);
}


int	get_min_of_list(t_element *element, int val)
{
    t_element *cur;
	int		min;

	cur = element;
	min = cur->value->fake_value;
	while (cur->prev)
	{
		cur = cur->prev;
		if ((cur->value->fake_value < min) && cur->value->fake_value != val)
		min = cur->value->fake_value;
	}
	return (min);
}
