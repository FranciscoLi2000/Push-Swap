#include "push_swap.h"

t_node	*stack_min_by_index(t_node *stack)
{
	t_node	*min;

	if (!stack)
		return (NULL);
	min = stack;
	while (stack)
	{
		if (stack->index < min->index)
			min = stack;
		stack = stack->next;
	}
	return (min);
}
