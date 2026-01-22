#include "push_swap.h"

static int	count_smaller(t_node *stack, int value)
{
	int	count;

	count = 0;
	while (stack)
	{
		if (stack->value < value)
			count++;
		stack = stack->next;
	}
	return (count);
}

void	index_stack(t_node *stack)
{
	t_node	*cur;

	cur = stack;
	while (cur)
	{
		cur->index = count_smaller(stack, cur->value);
		cur = cur->next;
	}
}
