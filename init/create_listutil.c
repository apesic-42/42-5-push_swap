
#include "push_swap.h"

static t_element* get_last_element(t_element *head) {
    if (head == NULL)
        return NULL;
    t_element *current = head;
    while (current->next != NULL)
        current = current->next;
    return (current);
}

t_listutil *create_listutil_a(t_element *first_a)
{
	t_listutil *new_listutil;


	new_listutil = (t_listutil *)ft_calloc(sizeof(t_listutil), 1);
	if (!new_listutil)
		return (NULL);
	new_listutil->head = first_a;
	new_listutil->tail = get_last_element(first_a);
	new_listutil->size = get_size(first_a);
	return (new_listutil);
}


static t_element *create_element_b()
{
	t_element *new_element;

	new_element = (t_element *)ft_calloc(sizeof(t_element), 1);
	if (!new_element)
		return (NULL);
	new_element->value = NULL;
	new_element->next = NULL;
	new_element->prev = NULL;
	return (new_element);
}

t_listutil *create_listutil_b()
{
	t_listutil *listutil_b;
	t_element *current_b;
	t_element *current_b2;


	listutil_b = (t_listutil *)ft_calloc(sizeof(t_listutil), 1);
	if (!listutil_b)
		return (NULL);
	current_b = create_element_b();
	if (!current_b)
		return (NULL);
	listutil_b->head = current_b;
	current_b2 = create_element_b();
	if (!current_b2)
		return (NULL);
	listutil_b->head->next = current_b2;
	current_b2->prev = current_b;
	listutil_b->tail = current_b2;
	listutil_b->size = 2;
	return (listutil_b);
}
