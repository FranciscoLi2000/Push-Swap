#include "push_swap.h"

t_node	*stack_max(t_node *stack)
{
	t_node	*max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack)
	{
		if (stack->value > max->value)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
