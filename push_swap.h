/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:20:20 by apesic            #+#    #+#             */
/*   Updated: 2025/01/17 15:38:56 by apesic           ###   ########.fr       */
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
	bool	signe; // true = positif, false = negatif
	unsigned int c1;
	unsigned int c2;
	unsigned int c3;
	unsigned int c4;
	unsigned int c5;
	unsigned int c6;
	unsigned int c7;
	unsigned int c8;
	unsigned int c9;
	unsigned int c10;
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
}						t_listutil;

char					**check_init(int ac, char **av);

t_element				*put_list_in_struct(char **av);
t_element				*create_element(char *value);
char 					*nb_to_0(char *nb);
t_listutil				*create_listutil(t_element *first_a);


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







#endif // FT_H
