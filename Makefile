# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apesic <apesicstudent.42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 14:28:04 by apesic            #+#    #+#              #
#    Updated: 2025/02/14 14:28:08 by apesic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
AR		=	ar

LIBFT_DIR = libft/libft/
PRINTF_DIR = libft/

LIBFT_SRC = $(LIBFT_DIR)libft.a
PRINTF_SRC = $(PRINTF_DIR)libftprintf.a

PUSH_SWAP_DIR = .
PUSH_SWAP_SRC =		main\
					init/transform_init\
					init/check_init\
					init/create_listutil\
					init/create_entities\
					manipulate/manipulate_utils\
					manipulate/manipulate_s\
					manipulate/manipulate_p\
					manipulate/manipulate_r\
					manipulate/manipulate_rr\
					algo/sort\
					algo/is_or_not\
					algo/sort_small\
					out/out_normaly\

PUSH_SWAP_DS = $(addprefix $(PUSH_SWAP_DIR)/, $(addsuffix .c, $(PUSH_SWAP_SRC)))
OBJS = $(PUSH_SWAP_DS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	make -C $(PRINTF_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_SRC) $(PRINTF_SRC) -o $(NAME) -g  # enlever -g

%.o:%.c
	$(CC) $(FLAGS) -I./ -c $< -o $@ -g # enlever -g

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(PRINTF_DIR) clean
	rm -f $(OBJS)

fclean : clean
	make -C $(LIBFT_DIR) fclean
	make -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

re : fclean all

# en plus

psclean :
	rm -f $(OBJS)
	rm -f $(NAME)

psre : psclean all


.PHONY: all clean fclean re
