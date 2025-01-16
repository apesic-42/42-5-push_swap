



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

static t_value *c12345(char *str_value,  t_value *new_value)
{
	new_value->c1 = str_value[0] -48 ;
	new_value->c2 = str_value[1] - 48;
	new_value->c3 = str_value[2] - 48;
	new_value->c4 = str_value[3] - 48;
	new_value->c5 = str_value[4] - 48;
	new_value->c6 = str_value[5] - 48;
	new_value->c7 = str_value[6] - 48;
	new_value->c8 = str_value[7] - 48;
	new_value->c9 = str_value[8] - 48;
	new_value->c10 = str_value[9] - 48;
	return (new_value);
}

static t_value *create_value(char *value)
{
	t_value *new_value;
	char *str;

	new_value = (t_value *)ft_calloc(sizeof(t_value), 1);
	if (!new_value)
		return (NULL);
	if (value[0] == '-')
		new_value->signe = false;
	else
		new_value->signe = true;
	new_value->list = true;
	str = nb_to_0(value);
	new_value  = c12345(str, new_value);
	free(str);
	return (new_value);
}

t_element *create_element(char list, char *value)
{
	t_element *new_element;

	new_element = (t_element *)ft_calloc(sizeof(t_element), 1);
	if (!new_element)
		return (NULL);
	new_element->value = create_value(value);
	new_element->next = NULL;
	new_element->prev = NULL;
	return (new_element);
}

t_element *put_list_in_struct(char **av)
{
	t_element *first_a;
	t_element *temp_element;
	t_element *new_element;
	size_t i;

	i = 1;
	first_a =  create_element('a', av[i]);
	if (!first_a)
		return NULL;
	i++;
	temp_element = first_a;
	while (av[i])
	{
		new_element = create_element('a', av[i]);
		if (!temp_element)
			return (clean_exit(new_element));
		temp_element->next = new_element;
		new_element->prev = temp_element;
		temp_element = new_element;
		i++;
	}
	return (first_a);
}



