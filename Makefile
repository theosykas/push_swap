
SRC_DIR = src
INCLUDE_DIR = include
LIBFT_DIR = $(INCLUDE_DIR)/libft

NAME = push_swap
SRCS = $(wilcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)
LIBFT_A = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DIR) -I$(LIBFT_DIR)

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_A) $(MLX_A)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_A) $(MLXFLAGS) -o $(NAME)
	@echo "$(GREEN)$(NAME)push_swap compiled successfully!$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiled succesfully $<$(RESET)"

$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "$(GREEN)Libft compiled$(RESET)"

clean:
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "$(RED)Object files cleaned$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "$(RED)Executable $(NAME) removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
