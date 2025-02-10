
#include "push_swap.h"


// int zero_position(t_value *v)
// {
// 	if (v->c1 != 0)
// 		return (0);
// 	if (v->c2 != 0)
// 		return (1);
// 	if (v->c3 != 0)
// 		return (2);
// 	if (v->c4 != 0)
// 		return (3);
// 	if (v->c5 != 0)
// 		return (4);
// 	if (v->c6 != 0)
// 		return (5);
// 	if (v->c7 != 0)
// 		return (6);
// 	if (v->c8 != 0)
// 		return (7);
// 	if (v->c9 != 0)
// 		return (8);
// 	if (v->c10 != 0)
// 		return (9);
// 	return (10);
// }

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


// bool x_in_list_a(int x, int rang, t_listutil *listutil)
// {
// 	t_element *current;

// 	if (listutil->sizea == 0)
// 		return (false);
// 	current = listutil->taila;
//     while (current != NULL)
// 	{
//         if (get_cx(current->value, rang) == x)
// 			if (x != 0 || zero_position(current->value) < rang)
//             	return (true);
//         current = current->prev;
//     }
// 	return (false);

// }
