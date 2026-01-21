/* ========================= stack.c ========================= */
#include "push_swap.h"

static void	print(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

void	sa(t_node **a)
{
	t_node	*t;

	if (!*a || !(*a)->next)
		return ;
	t = (*a)->next;
	(*a)->next = t->next;
	t->next = *a;
	*a = t;
	print("sa");
}

void	pa(t_node **a, t_node **b)
{
	t_node	*t;

	if (!*b)
		return ;
	t = *b;
	*b = (*b)->next;
	t->next = *a;
	*a = t;
	print("pa");
}

void	pb(t_node **a, t_node **b)
{
	t_node	*t;

	if (!*a)
		return ;
	t = *a;
	*a = (*a)->next;
	t->next = *b;
	*b = t;
	print("pb");
}

void	ra(t_node **a)
{
	t_node	*t;
	t_node	*last;

	if (!*a || !(*a)->next)
		return ;
	t = *a;
	*a = t->next;
	t->next = NULL;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = t;
	print("ra");
}

void	rra(t_node **a)
{
	t_node	*prev;
	t_node	*cur;

	if (!*a || !(*a)->next)
		return ;
	cur = *a;
	while (cur->next)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = NULL;
	cur->next = *a;
	*a = cur;
	print("rra");
}
