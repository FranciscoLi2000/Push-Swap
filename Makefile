NAME		= push_swap

CC		= cc
CFLAGS		= -Wall -Wextra -Werror

INCLUDES	= -Iincludes -Ilibft

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRCS_DIR	= srcs
SRCS		= \
		  build_stack.c \
		  chunk_sort.c \
		  count_strings.c \
		  error_exit.c \
		  free_2d.c \
		  free_stack.c \
		  ft_atol_safe.c \
		  ft_strjoin_2d.c \
		  get_max_bits.c \
		  has_duplicate.c \
		  index_stack.c \
		  parse_and_build_stack.c \
		  parse_numbers.c \
		  push_swap.c \
		  radix_sort.c \
		  sort_five.c \
		  sort_three.c \
		  split_all_args.c \
		  stack_add_back.c \
		  stack_distance_to_top.c \
		  stack_index_of.c \
		  stack_is_sorted.c \
		  stack_is_sorted_by_index.c \
		  stack_last.c \
		  stack_max.c \
		  stack_max_by_index.c \
		  stack_min.c \
		  stack_min_by_index.c \
		  stack_new.c \
		  stack_push.c \
		  stack_reverse_rotate.c \
		  stack_rotate.c \
		  stack_size.c \
		  stack_swap.c

SRCS		:= $(addprefix $(SRCS_DIR)/, $(SRCS))
OBJS		= $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
