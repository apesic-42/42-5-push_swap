
#include "push_swap.h"

static void print_value(const t_value *v) {
    printf("Signe: %s\n", v->signe ? "Positif" : "Négatif");
    printf("Chiffres: %u %u %u %u %u %u %u %u %u %u\n",
           v->c1, v->c2, v->c3, v->c4, v->c5, v->c6, v->c7, v->c8, v->c9, v->c10);
}

t_listutil *algo_sort(t_listutil *listutil)
{
	int i;
	int y;
	t_element *firsta;
	t_element *firstb;


	// positif

	i = 10; // pour les ci
	// parcourir les position de chiffres
	while( i >= 1 && is_sorted_total(listutil) != true)
	{
		// faire les 10 chiffres
		y = 9;
		while(y >= 0 && is_sorted_total(listutil) != true)
		{
			printf("demande presence dans position %d, chiffre %d\n", i, y);
			if (x_in_list_a(y , i, listutil) == true)
			{
				printf("presence dans position %d, chiffre %d\n", i, y);
				firsta = listutil->taila;
				// parcourir la liste a
				while (firsta !=  NULL && x_in_list_a(y , i, listutil) == true)
				{
					// printf("ici 1 : ");
					// print_value(firsta->value);
					// printf("le prev : ");
					// print_value(firsta->prev->value);
					if (zero_position(firsta->value) < i)

					{
						if (get_cx(firsta->value, i) == y) // rajouter la verif positif ou negatif ici
							listutil = manip_pb(listutil);
						else
							listutil = manip_ra(listutil);

						if (is_sorted_total(listutil) == true)
						{
							return (listutil);
						}
					}
					firsta = firsta->prev;
					//printf("ir\n");
					//print_value(firsta->value);
				}
				// remettre list b dans a

				while (listutil->sizeb > 0)
				{
					firstb = listutil->tailb;
					listutil = manip_pa(listutil);
				}
			}
			y--;
		}
		i--;
	}
	return (listutil);
}
