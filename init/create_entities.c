
#include "push_swap.h"

t_value *create_value(int true_value)
{
	t_value *new_value;

	new_value = (t_value *)ft_calloc(sizeof(t_value), 1);
	if (!new_value)
		return (NULL);
	new_value->true_value = true_value;
	return (new_value);
}

t_element *create_element(int true_value)
{
	t_element *new_element;

	new_element = (t_element *)ft_calloc(sizeof(t_element), 1);
	if (!new_element)
		return (NULL);
	new_element->value = create_value(true_value);
	new_element->next = NULL;
	new_element->prev = NULL;
	return (new_element);
}

t_listutil *link_cachliste_and_linked_list(t_listutil *listutil, char **av)
{
    t_element *current;
    int i;

    current = listutil->taila;
    while (current != NULL)
    {
        i = 0;
        //printf("value curr : %d, av1 %d\n", current->value->true_value, ft_atoi(av[0]));
        while (av[i] != NULL && ft_atoi(av[i]) != current->value->true_value )
            i++;
        if (ft_atoi(av[i]) != current->value->true_value)
            current->value->fake_value = i;
        else
            return (NULL);
        current = current->prev;
    }
    return (listutil);
}
