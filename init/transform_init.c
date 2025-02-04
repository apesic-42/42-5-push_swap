



#include "push_swap.h"

static int get_moor_small(int ac, char **av)
{
    long smallest;
	smallest = ft_atoi(av[--ac]);
    while (ac > 0)
	{
	   if (smallest > ft_atoi(av[ac]))
			smallest = ft_atoi(av[ac]);
		ac--;
	}
	return (smallest);
}

static int get_int_after(int prev, char **av, int ac)
{
    long temp;

    temp = ft_atoi(av[--ac]);
    while (ac > 0)
    {
        if (temp > ft_atoi(av[ac]) && ft_atoi(av[ac]) > prev)
            temp = ft_atoi(av[ac]);
		ac--;
    }
    return (temp);
}



t_element *put_list_in_struct(int ac, char **av)
{
    t_element *first_a;
	t_element *temp_element;
	t_element *new_element;


	first_a =  create_element(get_moor_small(ac, av));
	if (!first_a)
		return NULL;

	more_small = get_moor_small(ac, av);
	printf("more_small : %d, after %d\n", more_small, get_int_after(more_small, av, ac));
	return (NULL);
}
