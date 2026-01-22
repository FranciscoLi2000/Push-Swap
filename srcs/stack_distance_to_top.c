#include "push_swap.h"

int	stack_distance_to_top(t_node *stack, t_node *node)
{
	int	pos;
	int	size;

	pos = stack_index_of(stack, node);
	size = stack_size(stack);
	if (pos <= size / 2)
		return (pos);
	return (pos - size);
}
