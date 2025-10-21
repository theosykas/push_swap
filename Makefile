CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include -g3 #-fsanitize=address

NAME = push_swap
LIBFT = include/libft/libft.a

SRCS = srcs/algo.c srcs/calculate_cost.c srcs/check_error.c srcs/cost_move.c srcs/fill_content.c srcs/get_value.c srcs/struct_init.c \
		srcs/main.c srcs/push.c srcs/rev_rotate.c srcs/rotate_content_init.c srcs/rotate_content_op.c srcs/rotate.c srcs/sort_content.c \
		srcs/swap.c srcs/utils.c \

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

include/libft/libft.a:
	$(MAKE) -C include/libft

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	@$(MAKE) all

.PHONY : clean fclean all re
