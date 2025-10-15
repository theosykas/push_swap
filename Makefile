CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include

NAME = push_swap
LIBFT = include/libft/libft.a

SRCS = srcs/main.c srcs/utils.c srcs/check_error.c srcs/init.c srcs/swap.c srcs/push.c srcs/get_value.c srcs/cost_move.c \
	srcs/cost_init.c srcs/calculate_cost.c srcs/fill_content.c srcs/algo.c srcs/sort_content.c srcs/rotate.c srcs/rev_rotate.c \

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

include/libft/libft.a:
	$(MAKE) -C include/libft

clean:
	rm -f $(OBJ)
	$(MAKE) -C include/libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C include/libft fclean

re: fclean all

.PHONY : clean fclean all re