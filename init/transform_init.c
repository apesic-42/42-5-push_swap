



#include "push_swap.h"

static void *clean_exit(t_element *first)
{
	while (first)
	{
		t_element *tmp = first;
		first = first->next;
		free(tmp);
	}
	return NULL;
}


t_element *put_list_in_struct(char *lista)
{
	t_element *first_a;
	t_element *temp_element;
	t_element *new_element;

	first_a =  create_element('a', *lista -48);
	if (!first_a)
		return NULL;
	lista++;
	temp_element = first_a;
	while (*lista != '\0')
	{
		new_element = create_element('a', *lista - 48);
		if (!temp_element)
			return (clean_exit(new_element));
		temp_element->next = new_element;
		new_element->prev = temp_element;
		temp_element = new_element;
		lista++;
	}
	return (first_a);
}

t_element *create_element(char list, int value)
{
	t_element *new_element;

	printf("recep : %d\n", value);

	new_element = (t_element *)malloc(sizeof(t_element));
	if (!new_element)
		return (NULL);
	new_element->list = list;
	new_element->value = value;
	new_element->next = NULL;
	new_element->prev = NULL;
	return (new_element);
}


