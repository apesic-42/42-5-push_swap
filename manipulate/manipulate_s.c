

#include "push_swap.h"

t_listutil *manip_sa(t_listutil *listutil)
{
	t_element *first;
	t_element *pre_last;
	t_value	*temp_val;

	ft_printf("sa\n");
	first = listutil->heada;
	pre_last = get_next_l(first);
	if (first->value && pre_last->value)
	{
		temp_val = first->value;
		first->value = pre_last->value;
		pre_last->value = temp_val;
		return (listutil);
	}
	return NULL;
}

t_listutil *manip_sb(t_listutil *listutil)
{
	t_element *first;
	t_element *pre_last;
	t_value	*temp_val;

	ft_printf("sb\n");
	first = listutil->headb;
	pre_last = get_next_l(first);
	if (first->value && pre_last->value)
	{
		temp_val = first->value;
		first->value = pre_last->value;
		pre_last->value = temp_val;
		return (listutil);
	}
	return NULL;
}

t_listutil *manip_ss(t_listutil *listutil)
{
	ft_printf("ss\n");
	listutil = manip_sa(listutil);
	if (!listutil)
		return (listutil);
	listutil = manip_sb(listutil);
	if (!listutil)
		return (listutil);
	return (listutil);
}
