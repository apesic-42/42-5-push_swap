

#include "push_swap.h"

int get_cx(t_value *value, int x)
{
	if (x == 1)
		return (value->c1);
	if (x == 2)
		return (value->c2);
	if (x == 3)
		return (value->c3);
	if (x == 4)
		return (value->c4);
	if (x == 5)
		return (value->c5);
	if (x == 6)
		return (value->c6);
	if (x == 7)
		return (value->c7);
	if (x == 8)
		return (value->c8);
	if (x == 9)
		return (value->c9);
	if (x == 10)
		return (value->c10);
	return (-1);
}
