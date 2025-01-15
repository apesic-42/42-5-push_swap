/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:20:20 by apesic            #+#    #+#             */
/*   Updated: 2025/01/15 14:55:20 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/printf/ft_printf.h"


typedef struct t_element
{
	char			list; // a ou b
	int 			value; //
	struct t_element	*next;
	struct t_element	*prev;
}					t_element;

char *check_init(int ac, char **av);

t_element *put_list_in_struct(char *lista);
t_element *create_element(char list,   int value);

	// manipulate

// utils
t_element *get_last(t_element *first);


#endif // FT_H
