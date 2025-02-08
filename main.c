
#include "push_swap.h"

//////////////////////////////////////////////////////////////
// Fonction pour imprimer les détails de t_value
static void print_value(const t_value *v) {
  printf("          -- vrais: %d | fausse : %u\n", v->true_value,
         v->fake_value);
}

// Fonction pour imprimer la liste
static void print_list(t_listutil *listutil) {
  int i = 0;
  printf("info lists : \n tail a : %d\n tail b : %d\n total : %d\n",
         listutil->sizea, listutil->sizeb, listutil->sizea + listutil->sizeb);
  const t_element *current = listutil->taila;
  if (current == NULL)
    printf("rien dans cla liste a\n");
  while (current != NULL) {
    printf("element : %d\n", i);
    if (current->value != NULL) {
      print_value(current->value);
    } else {
      printf("No value\n");
    }
    current = current->prev; // Avancer à l'élément suivant
    i++;
    // printf("\n"); // Espacement entre les éléments pour une meilleure
    // lisibilité
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
    // printf("\n"); // Espacement entre les éléments pour une meilleure
    // lisibilité
  }
}

//////////////////////////////////////////////////////////////

static int fail() {
  ft_printf("error");
  return (-1);
}

int main(int ac, char **av) {
  t_listutil *listutil;

  // put_list_in_struct(ac, av);
  listutil = init_list(ac, av);
  // if (!listutil)
  // 	return (fail());

  print_list(listutil);

  // printf("\n\n\n\nletsgo\n\n");

  // printf("\n\n\n\n");
  // listutil = manip_sa(listutil);
  // print_list(listutil);

  // printf("\n\n\n\n");
  // listutil = manip_pb(listutil);
  // listutil = manip_pb(listutil);
  // listutil = manip_pb(listutil);
  // print_list(listutil);

  // printf("\n\n\n\n");
  // listutil = manip_ra(listutil);
  // listutil = manip_rb(listutil);
  // print_list(listutil);

  // printf("\n\n\n\n");
  // listutil = manip_ra(listutil);
  // listutil = manip_rrb(listutil);
  // print_list(listutil);
  // printf("tail val : ");
  // print_value(listutil->taila->prev->value);

  // printf("\n\n\n\n");
  // listutil = manip_sa(listutil);
  // print_list(listutil);

  // printf("\n\n\n\n");
  // listutil = manip_pa(listutil);
  // listutil = manip_pa(listutil);
  // listutil = manip_pa(listutil);
  // print_list(listutil);

  // listutil = algo_sort(listutil);

  // printf("\n\n\nfinish\n\n");
  // print_list(listutil);

  // if (is_sorted_total(listutil) == true)
  // 	printf("sorted good\n");

  // if (is_sorted_total(listutil) == false)
  // 	printf("not sorted\n");
  // out_normaly(listutil);
}
