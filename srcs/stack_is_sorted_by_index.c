#include "push_swap.h"

int	stack_is_sorted_by_index(t_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}
