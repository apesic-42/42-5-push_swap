
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
  printf("info lists : \n tail a : %d\n tail b : %d\n total : %d\n max lenght : %d\n",
         listutil->sizea, listutil->sizeb, listutil->sizea + listutil->sizeb, listutil->max_lenght);
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
  ft_printf("Error\n");
  return (-1);
}

int main(int ac, char **av)
{
    t_listutil *listutil;

    if (ac == 1)
      return (-1);
    if (check_init(ac, av) == false)
    {
        printf("Error\n");
        return (-1);
    }
    listutil = init_list(ac, av);
    if (!listutil)
      return (fail());
    listutil = algo_sort(listutil);
    out_normaly(listutil);
}
