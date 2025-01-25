
#include "push_swap.h"

static bool v1_more_than_v2(t_value *v1, t_value *v2)
{
	if (v1->signe == true && v2->signe == false)
		return (true);
	if (v1->signe == false && v2->signe == true)
		return (false);
	if (v1->c1 > v2->c1)
		return (true);
	if (v1->c2 > v2->c2)
		return (true);
	if (v1->c3 > v2->c3)
		return (true);
	if (v1->c4 > v2->c4)
		return (true);
	if (v1->c5 > v2->c5)
		return (true);
	if (v1->c6 > v2->c6)
		return (true);
	if (v1->c7 > v2->c7)
		return (true);
	if (v1->c8 > v2->c8)
		return (true);
	if (v1->c9 > v2->c9)
		return (true);
	if (v1->c10 > v2->c10)
		return (true);
	return (false);
}

bool is_sorted_total(t_listutil *listutil)
{
	t_element *current;

	if (listutil->sizeb != 0 || listutil->sizea == 0)
		return (false);
	current = listutil->taila;
    while (current->prev != NULL)
	{
        if (v1_more_than_v2(current->value, current->prev->value) == true)
            return (false);
        current = current->prev;
    }
	return (true);
}
