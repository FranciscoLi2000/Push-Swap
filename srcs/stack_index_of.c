#include "push_swap.h"

int	stack_index_of(t_node *stack, t_node *target)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack == target)
			return (i);
		i++;
		stack = stack->next;
	}
	return (-1);
}
