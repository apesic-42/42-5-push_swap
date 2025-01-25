
#include "push_swap.h"



//////////////////////////////////////////////////////////////
// Fonction pour imprimer les détails de t_value
void print_value(const t_value *v) {
    printf("Signe: %s\n", v->signe ? "Positif" : "Négatif");
    printf("Chiffres: %u %u %u %u %u %u %u %u %u %u\n",
           v->c1, v->c2, v->c3, v->c4, v->c5, v->c6, v->c7, v->c8, v->c9, v->c10);
}

// Fonction pour imprimer la liste
void print_list(t_listutil *listutil) {
	int i = 0;
	printf("info lists : \n tail a : %d\n tail b : %d\n total : %d\n", listutil->sizea, listutil->sizeb, listutil->sizea + listutil->sizeb);
    const t_element *current = listutil->taila;
    if (current == NULL)
		printf("rien dans cla liste b\n");
	while (current != NULL) {
        printf("element : %d\n", i);
		if (current->value != NULL) {
            print_value(current->value);
        } else {
            printf("No value\n");
        }
        current = current->prev; // Avancer à l'élément suivant
		i++;
        //printf("\n"); // Espacement entre les éléments pour une meilleure lisibilité
    }
	printf("\n\n");
	i = 0;
    current = listutil->tailb;
	if (current == NULL)
		printf("rien dans cla liste b\n");
    while (current != NULL) {
        printf("element : %d\n", i);
		if (current->value != NULL) {
            print_value(current->value);
        } else {
            printf("No value\n");
        }
        current = current->prev; // Avancer à l'élément suivant
		i++;
        //printf("\n"); // Espacement entre les éléments pour une meilleure lisibilité
    }
}

//////////////////////////////////////////////////////////////

static int fail()
{
	ft_printf("error");
	return (-1);
}

int main(int ac, char **av)
{
	t_element *first_a;
	t_listutil *listutil;

	// chech if entries are ok
	av = check_init(ac, av);
	printf("ac : %d\n", ac);
	first_a = put_list_in_struct(ac, av);
	listutil = create_listutil(first_a);
	if (!listutil)
		return (fail());

	// print_list(listutil);

	// printf("\n\n\n\n");
	// listutil = manip_sa(listutil);
	// print_list(listutil);

	// printf("\n\n\n\n");
	// listutil = manip_pb(listutil);
	// listutil = manip_pb(listutil);
	// listutil = manip_pb(listutil);
	// print_list(listutil);

	// printf("\n\n\n\n");
	// listutil = manip_sa(listutil);
	// print_list(listutil);

	// printf("\n\n\n\n");
	// listutil = manip_pa(listutil);
	// listutil = manip_pa(listutil);
	// listutil = manip_pa(listutil);
	// print_list(listutil);

	listutil = algo_sort(listutil);

	if (is_sorted_total(listutil) == true)
		printf("sorted good\n");

	if (is_sorted_total(listutil) == false)
		printf("not sorted\n");
	out_normaly(listutil);


}



