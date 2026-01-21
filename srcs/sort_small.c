/* ========================= sort_small.c ========================= */
#include "push_swap.h"

int	is_sorted(t_node *a)
{
	while (a && a->next)
	{
		if (a->val > a->next->val)
			return (0);
		a = a->next;
	}
	return (1);
}

int	stack_size(t_node *s)
{
	int	i;

	i = 0;
	while (s)
	{
		i++;
		s = s->next;
	}
	return (i);
}

void	sort_three(t_node **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->val;
	y = (*a)->next->val;
	z = (*a)->next->next->val;
	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x < y && y > z && x > z)
		rra(a);
}

static void	push_min(t_node **a, t_node **b)
{
	t_node	*t;
	int		min;
	int		pos;
	int		i;

	t = *a;
	min = t->idx;
	pos = 0;
	i = 0;
	while (t)
	{
		if (t->idx < min)
		{
			min = t->idx;
			pos = i;
		}
		t = t->next;
		i++;
	}
	if (pos <= stack_size(*a) / 2)
		while (pos--)
			ra(a);
	else
		while (pos++ < stack_size(*a))
			rra(a);
	pb(a, b);
}

void	sort_five(t_node **a, t_node **b)
{
	while (stack_size(*a) > 3)
		push_min(a, b);
	sort_three(a);
	while (*b)
		pa(a, b);
}
