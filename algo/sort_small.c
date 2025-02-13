
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




static int	get_distance(t_element *element, int val)
{
    t_element *cur;
	int		distance;

	distance = 0;
	cur = element;
	while (cur)
	{
		if (cur->value->fake_value == val)
			break ;
		distance++;
		cur = cur->prev;
	}
	return (distance);
}

static t_listutil *sort_3(t_listutil *listutil)
{
    t_element *firsta;
    t_element *seconda;
    t_element *thirda;

    firsta = listutil->taila;
    seconda = firsta->prev;
    thirda = seconda->prev;

    if (is_min(firsta->value->fake_value, listutil) == true && is_max(seconda->value->fake_value, listutil) == true) // 2
        return (manip_rra(manip_sa(manip_ra(listutil))));
    if (is_max(firsta->value->fake_value, listutil) == true && is_min(seconda->value->fake_value, listutil) == true) // 3
        return (manip_ra(listutil));
    if (is_max(firsta->value->fake_value, listutil) == true && is_min(thirda->value->fake_value, listutil) == true) // 6
        return (manip_sa(manip_ra(listutil)));
    if (is_max(seconda->value->fake_value, listutil) == true && is_min(thirda->value->fake_value, listutil) == true) // 4
        return (manip_rra(listutil));
    if (is_max(thirda->value->fake_value, listutil) == true && is_min(seconda->value->fake_value, listutil) == true) // 4
        return (manip_sa(listutil));
    return (listutil);
}




static t_listutil *sort_4(t_listutil *listutil)
{
	int	distance;

	if (is_sorted_total(listutil) == true)
		return (listutil);
	distance = get_distance(listutil->taila, get_min_of_list(listutil->taila, -1));
	if (distance == 1)
		listutil = manip_ra(listutil);
	else if (distance == 2)
		listutil = manip_ra(manip_ra(listutil));
	else if (distance == 3)
	    listutil = manip_rra(listutil);
	if (is_sorted_total(listutil) == true)
		return (listutil);
	listutil = manip_pb(listutil);
	listutil = sort_3(listutil);
	listutil = manip_pa(listutil);
	return (listutil);
}



static t_listutil *sort_5(t_listutil *listutil)
{
	int	distance;

	distance = get_distance(listutil->taila, get_min_of_list(listutil->taila, -1));
	if (distance == 1)
		listutil = manip_ra(listutil);
	else if (distance == 2)
	   listutil = manip_ra(manip_ra(listutil));
	else if (distance == 3)
	   listutil = manip_rra(manip_rra(listutil));
	else if (distance == 4)
	   listutil = manip_rra(listutil);
	if (is_sorted_total(listutil) == true)
		return (listutil);
	listutil = manip_pb(listutil);
	listutil = sort_4(listutil);
	listutil = manip_pa(listutil);
	return (listutil);
}


t_listutil *algo_sort_5(t_listutil *listutil)
{

    int size;

    size = listutil->sizea;
    if (is_sorted_total(listutil) == true)
        return (listutil);
	if (size == 2)
		return (manip_sa(listutil));
	else if (size == 3)
		return (sort_3(listutil));
	else if (size == 4)
		return (sort_4(listutil));
	else if (size == 5)
	   return (sort_5(listutil));
    return (listutil);
}
