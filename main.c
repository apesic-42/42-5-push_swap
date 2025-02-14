/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:27:03 by apesic            #+#    #+#             */
/*   Updated: 2025/02/14 14:27:05 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	fail(void)
{
	ft_printf("Error\n");
	return (-1);
}

int	main(int ac, char **av)
{
	t_listutil	*listutil;

	if (ac == 1)
		return (-1);
	av = check_init(ac, av);
	if (av == NULL)
	{
		printf("Error\n");
		return (-1);
	}
	ac = ft_tablen(av);
	listutil = init_list(ac, av);
	if (!listutil)
		return (fail());
	listutil = algo_sort(listutil);
	out_normaly(listutil);
}

// //////////////////////////////////////////////////////////////
// // Fonction pour imprimer les détails de t_value
// static void	print_value(const t_value *v)
// {
// 	printf("          -- vrais: %d | fausse : %u\n", v->true_value,
// 		v->fake_value);
// }

// // Fonction pour imprimer la liste
// static void	print_list(t_listutil *listutil)
// {
// 	int				i;
// 	const t_element	*current = listutil->taila;

// 	i = 0;
// 	printf("info lists : \n tail a : %d\n tail b : %d\n total :
// 		%d\n max lenght : %d\n", listutil->sizea, listutil->sizeb,
// 		listutil->sizea + listutil->sizeb, listutil->max_lenght);
// 	if (current == NULL)
// 		printf("rien dans cla liste a\n");
// 	while (current != NULL)
// 	{
// 		printf("element : %d\n", i);
// 		if (current->value != NULL)
// 		{
// 			print_value(current->value);
// 		}
// 		else
// 		{
// 			printf("No value\n");
// 		}
// 		current = current->prev; // Avancer à l'élément suivant
// 		i++;
// 		// printf("\n"); // Espacement entre les éléments pour une meilleure
// 		// lisibilité
// 	}
// 	printf("\n\n");
// 	i = 0;
// 	current = listutil->tailb;
// 	if (current == NULL)
// 		printf("rien dans cla liste b\n");
// 	while (current != NULL)
// 	{
// 		printf("element : %d\n", i);
// 		if (current->value != NULL)
// 		{
// 			print_value(current->value);
// 		}
// 		else
// 		{
// 			printf("No value\n");
// 		}
// 		current = current->prev; // Avancer à l'élément suivant
// 		i++;
// 		// printf("\n"); // Espacement entre les éléments pour une meilleure
// 		// lisibilité
// 	}
// }

// //////////////////////////////////////////////////////////////
