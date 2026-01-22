#include "push_swap.h"

t_node	*stack_max_by_index(t_node *stack)
{
	t_node	*max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack)
	{
		if (stack->index > max->index)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
