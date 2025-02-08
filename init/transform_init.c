



#include "push_swap.h"



static bool is_sorted_total_av(int ac,char** av)
{
    char *current;

	current = av[ac];
    while (ac > 0)
	{
        if (ft_atoi(av[ac]) < ft_atoi(av[ac - 1]))
            return (false);
        ac--;
    }
	return (true);
}

static char *get_min(int ac, char**av)
{
    char * st;
    st  = av[ac--];
    while (ac > 0)
    {
        if (ft_atoi(st) > ft_atoi(av[ac]))
            st = av[ac];
        ac--;
    }
    return (st);
}


char **cache_sorte(int ac, char **liste)
{
    int i;
    int j;
    int size;
    char *temp;
    (void)ac;

    // Get the size of the array (assuming it's NULL-terminated)
    size = 0;
    while (liste[size] != NULL)
        size++;

    printf("size %d \n", size);

    i = 0;
    while(i < size + 1)
    {
        j = 0;
        while(j < size - i - 1)
        {
            // Convert strings to integers for comparison
            if (ft_atoi(liste[j]) > ft_atoi(liste[j + 1]))
            {
                // Swap the strings
                temp = liste[j];
                liste[j] = liste[j + 1];
                liste[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    return (liste);
}

t_element *put_list_in_struct(int ac, char **av)
{
    t_element *first_a;
	t_element *temp_element;
	t_element *new_element;
	int i;

	i = 1;
	first_a = create_element(ft_atoi(av[--ac]));
	if (!first_a)
		return NULL;
	ac--;
	temp_element = first_a;
	while (ac > 0)
	{
		new_element = create_element(ft_atoi(av[ac]));
		if (!temp_element)
			return (clean_exit_init(new_element));
		temp_element->next = new_element;
		new_element->prev = temp_element;
		temp_element = new_element;
		ac--;
	}
	return (first_a);
}
