/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:20:20 by apesic            #+#    #+#             */
/*   Updated: 2025/01/29 14:16:57 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/printf/ft_printf.h"
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_value
{
    int true_value;
    unsigned int fake_value;
}						t_value;

typedef struct t_element
{
	struct t_value		*value;
	struct t_element	*next;
	struct t_element	*prev;
}						t_element;

typedef struct t_listutil
{
	t_element			*heada;
	t_element			*taila;
	int					sizea;
	t_element			*headb;
	t_element			*tailb;
	int					sizeb;
	int                 max_lenght;
}						t_listutil;

bool					check_init(int ac, char **av);

t_element				*put_list_in_struct(int ac, char **av);
t_element				*create_element(int true_value);
t_value *create_value(int true_value);
char 					*nb_to_0(char *nb);
t_listutil				*create_listutil(t_element *first_a);
t_listutil              *init_list(int ac,char ** av);
t_listutil              *link_cachliste_and_linked_list(t_listutil *listutil, char **av);
t_listutil              *get_max_lenght(t_listutil *listutil);


size_t					get_size(t_element *first);
t_element *get_next_l(t_element *element);
t_element *get_prev_l(t_element *element);

t_listutil *manip_sa(t_listutil *listutil);
t_listutil *manip_sb(t_listutil *listutil);
t_listutil *manip_ss(t_listutil *listutil);
t_listutil *manip_pb(t_listutil *listutil);
t_listutil *manip_pa(t_listutil *listutil);
t_listutil *manip_ra(t_listutil *listutil);
t_listutil 	*manip_rb(t_listutil *listutil);
t_listutil 	*manip_rr(t_listutil *listutil);
t_listutil 	*manip_rra(t_listutil *listutil);
t_listutil 	*manip_rrb(t_listutil *listutil);


char **cache_sorte(int ac,char** av);

t_listutil *algo_sort(t_listutil *listutil);
bool is_sorted_total(t_listutil *listutil);
// bool x_in_list_a(int x, int rang, t_listutil *listutil);
// int get_cx(t_value *value, int x);
// int zero_position(t_value *v);


void free_list(t_element *head);
void out_normaly(t_listutil *listutil);
void *clean_exit_init(t_element *first);







#endif // FT_H
