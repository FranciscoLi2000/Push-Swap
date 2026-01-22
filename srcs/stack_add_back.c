#include "push_swap.h"

void	stack_add_back(t_node **stack, t_node *new)
{
	t_node	*tmp;

	if (!stack || !new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
