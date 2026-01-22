#include "push_swap.h"

static void	push_min_to_b(t_node **a, t_node **b)
{
	t_node	*min;
	int		dist;

	min = stack_min_by_index(*a);
	dist = stack_distance_to_top(*a, min);
	while (dist > 0)
	{
		stack_rotate(a);
		dist--;
	}
	while (dist < 0)
	{
		stack_reverse_rotate(a);
		dist++;
	}
	stack_push(b, a);
}

void	sort_five(t_node **a, t_node **b)
{
	if (stack_size(*a) != 5)
		return ;
	push_min_to_b(a, b);
	push_min_to_b(a, b);
	sort_three(a);
	if ((*b)->index < (*b)->next->index)
		stack_swap(b);
	stack_push(a, b);
	stack_push(a, b);
}
