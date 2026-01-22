#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ************************************************************************** */
/*                                INCLUDES                                    */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"

/* ************************************************************************** */
/*                                STRUCTURES                                  */
/* ************************************************************************** */

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

/* ************************************************************************** */
/*                           PARSING / ERROR                                  */
/* ************************************************************************** */

int		parse_and_build_stack(int argc, char **argv, t_node **a);
char	**split_all_args(int argc, char **argv);
int		*parse_numbers(char **nums, int count);
int		ft_atol_safe(char *str, int *out);
int		has_duplicate(int *arr, int size);
void	error_exit(t_node **a);

void	build_stack(t_node **a, int *arr, int size);

/* ************************************************************************** */
/*                               UTILITIES                                    */
/* ************************************************************************** */

int		count_strings(char **arr);
void	free_2d(char **arr);
char	**ft_strjoin_2d(char **a, char **b);

/* ************************************************************************** */
/*                               STACK CORE                                   */
/* ************************************************************************** */

t_node	*stack_new(int value);
void	stack_add_back(t_node **stack, t_node *new_node);
t_node	*stack_last(t_node *stack);
int		stack_size(t_node *stack);
void	free_stack(t_node **stack);

/* ************************************************************************** */
/*                           STACK OPERATIONS                                  */
/* ************************************************************************** */

void	stack_swap(t_node **stack);
void	stack_push(t_node **dst, t_node **src);
void	stack_rotate(t_node **stack);
void	stack_reverse_rotate(t_node **stack);

/* ************************************************************************** */
/*                         STACK ANALYSIS / INDEX                              */
/* ************************************************************************** */

void	index_stack(t_node *stack);

t_node	*stack_min(t_node *stack);
t_node	*stack_max(t_node *stack);

t_node	*stack_min_by_index(t_node *stack);
t_node	*stack_max_by_index(t_node *stack);

int		stack_is_sorted(t_node *stack);
int		stack_is_sorted_by_index(t_node *stack);

int		stack_index_of(t_node *stack, t_node *target);
int		stack_distance_to_top(t_node *stack, t_node *node);

/* ************************************************************************** */
/*                               SORTING                                      */
/* ************************************************************************** */

void	sort_three(t_node **a);
void	sort_five(t_node **a, t_node **b);

void	chunk_sort(t_node **a, t_node **b);
void	radix_sort(t_node **a, t_node **b);

int		get_max_bits(int max_index);

#endif
