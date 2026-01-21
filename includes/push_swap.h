/* ========================= push_swap.h ========================= */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				val;
	int				idx;
	struct s_node	*next;
}	t_node;

/* parse */
int		*parse_args(int ac, char **av, int *n);

/* utils */
void	error_exit(void);
long	ft_atol(const char *s);
int		is_sorted(t_node *a);
int		stack_size(t_node *s);

/* index */
int		*sorted_copy(int *arr, int n);
int		get_index(int *sorted, int n, int val);

/* stack ops */
void	sa(t_node **a);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rra(t_node **a);

/* sort */
void	sort_three(t_node **a);
void	sort_five(t_node **a, t_node **b);
void	radix_sort(t_node **a, t_node **b, int n);

#endif
