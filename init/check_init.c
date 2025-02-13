


#include "push_swap.h"

static bool is_number(char *av)
{
    int i;

    i = 0;
    if (av[i] == '-' || av[i] == '+')
        i++;
    while (av[i] != '\0')
    {
        if (ft_isdigit(av[i]) == false)
            return (false);
        i++;
    }
    return (true);
}

static bool is_alone(char *av, char **avv, int i)
{
    int y;

    y = 0;
    while (avv[y] != NULL)
    {
        if (ft_atoi(av) == ft_atoi(avv[y]) && i != y)
            return (false);
        y++;
    }
    return (true);
}


int	ft_tablen(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void print_str_array(char **array, int count) {
    for (int i = 0; i < count; i++) {
        printf("%s\n", array[i]);
    }
}


char **check_init(int ac, char **av)
{
	int i;

	i = 0;
	if (ac <= 1)
	    return (NULL);
	av = &av[1];
	if (ac == 2)
	{
	    av = ft_split(av[0], ' ');
	    ac = ft_tablen(av);
	}
	while (av[i] != NULL)
	{
        if (is_number(av[i]) != true || ft_atoi(av[i]) < INT_MIN || ft_atoi(av[i]) > INT_MAX)
            return (NULL);
        i++;
	}
	i = 0;
	while (av[i] != NULL)
    {
        if (is_alone(av[i], av, i) != true)
            return (NULL);
        i++;
    }
	return (av);
}
