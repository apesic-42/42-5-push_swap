
#include "push_swap.h"



//////////////////////////////////////////////////////////////
void print_list(t_element *head)
{
	while (head)
	{
		printf("List: %c, Value: %d\n", head->list, head->value);
		head = head->next;
	}
}
//////////////////////////////////////////////////////////////

int main(int ac, char **av)
{
	char *lista;
	t_element *first_a;

	ft_printf("start\n"); // start
	// chech if entries are ok
	lista = check_init(ac, av);
	first_a = put_list_in_struct(lista);

	


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
