
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
    const t_element *current = listutil->head;
    while (current != NULL) {
        printf("List: %s\n", current->value->list ? "a" : "b");
        printf("element : %d\n", i);
		if (current->value != NULL) {
            print_value(current->value);
        } else {
            printf("No value\n");
        }
        current = current->next; // Avancer à l'élément suivant
		i++;
        //printf("\n"); // Espacement entre les éléments pour une meilleure lisibilité
    }
}

//////////////////////////////////////////////////////////////

int main(int ac, char **av)
{
	t_element *first_a;
	t_listutil *listutil;

	// chech if entries are ok
	av = check_init(ac, av);
	first_a = put_list_in_struct(av);
	listutil = create_listutil(first_a);


	// printf("size : %d\n", listutil->size);
	// t_element *last = listutil->tail;
	// print_value(last->value);

	print_list(listutil);
	printf("\n\n\n\n");
	manip_sa(first_a, listutil);
	print_list(listutil);
}




// not mine

// int	main(int ac, char **av)
// {
// 	t_stack	*stack_a;
// 	t_stack	*stack_b;
// 	int		stack_size;

// 	if (ac < 2)
// 		return (0);
// 	if (!is_correct_input(av))
// 		exit_error(NULL, NULL);
// 	stack_b = NULL;
// 	stack_a = fill_stack_values(ac, av);
// 	stack_size = get_stack_size(stack_a);
// 	assign_index(stack_a, stack_size + 1);
// 	push_swap(&stack_a, &stack_b, stack_size);
// 	free_stack(&stack_a);
// 	free_stack(&stack_b);
// 	return (0);
// }
