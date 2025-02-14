/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:34:29 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:34:30 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	is_sorted_total_av(int ac, char **av)
{
	char	*current;

	current = av[ac];
	while (ac > 0)
	{
		if (ft_atoi(av[ac]) < ft_atoi(av[ac - 1]))
			return (false);
		ac--;
	}
	return (true);
}

static char	*get_min(int ac, char **av)
{
	char	*st;

	st = av[ac--];
	while (ac > 0)
	{
		if (ft_atoi(st) > ft_atoi(av[ac]))
			st = av[ac];
		ac--;
	}
	return (st);
}

static int	get_s(char **liste)
{
	int	size;

	size = 0;
	while (liste[size] != NULL)
		size++;
	return (size);
}

char	**cache_sorte(int ac, char **liste)
{
	int		i;
	int		j;
	char	*temp;

	ac = 0;
	while (liste[ac] != NULL)
		ac++;
	i = 0;
	while (i < ac + 1)
	{
		j = 0;
		while (j < ac - i - 1)
		{
			if (ft_atoi(liste[j]) > ft_atoi(liste[j + 1]))
			{
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

t_element	*put_list_in_struct(int ac, char **av)
{
	t_element	*first_a;
	t_element	*temp_element;
	t_element	*new_element;
	int			i;

	i = 0;
	first_a = create_element(ft_atoi(av[--ac]));
	if (!first_a)
		return (NULL);
	ac--;
	temp_element = first_a;
	while (ac >= 0)
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
