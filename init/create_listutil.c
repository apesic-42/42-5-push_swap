
#include "push_swap.h"

static t_element* get_last_element(t_element *head) {
    if (head == NULL)
        return NULL;
    t_element *current = head;
    while (current->next != NULL)
        current = current->next;
    return (current);
}



t_listutil *create_listutil(t_element *first_a)
{
	t_listutil *new_listutil;


	new_listutil = (t_listutil *)ft_calloc(sizeof(t_listutil), 1);
	if (!new_listutil)
		return (NULL);
	new_listutil->heada = first_a;
	new_listutil->taila = get_last_element(first_a);
	new_listutil->sizea = get_size(first_a);
	new_listutil->sizeb = 0;
	return (new_listutil);
}


t_listutil *init_list(int ac,char ** av)
{
    t_element *first_a;
    t_listutil *listutil;

    av = check_init(ac, av);
    first_a = put_list_in_struct(ac, av);
    av = cache_sorte(ac, &av[1]);
    listutil = create_listutil(first_a);
    listutil = link_cachliste_and_linked_list(listutil, av);

    return (listutil);

}
