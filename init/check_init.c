


#include "push_swap.h"

static bool is_number(char *av)
{
    int i;

    i = 0;
    while (av[i] != '\0')
    {
        if (ft_isdigit(av[i]) == false && av[i] != '-')
            {
                return (false);
            }
        i++;
    }
    return (true);
}

static bool is_alone(char *av, char **avv, int i)
{
    int y;

    y = 1;
    while (avv[y] != NULL)
    {
        if (ft_atoi(av) == ft_atoi(avv[y]) && i != y)
            return (false);
        y++;
    }
    return (true);
}

bool check_init(int ac, char **av)
{
	int i;

	i = 1;
	if (ac <= 1)
	    return (false);
	while (av[i] != NULL)
	{
        if (is_number(av[i]) != true)
            return (false);
        i++;
	}
	i = 1;
	while (av[i] != NULL)
    {
        if (is_alone(av[i], av, i) != true)
            return (false);
        i++;
    }
	return (true);
}
