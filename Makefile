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
					init/nb_to_0\
					init/create_listutil\
					manipulate/manipulate_utils
					# manipulate/manipulate_s\

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

.PHONY: all clean fclean re
