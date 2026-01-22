#include "push_swap.h"

void	chunk_sort(t_node **a, t_node **b)
{
	int	size;
	int	chunk;
	int	low;
	int	high;
	int	mid;

	size = stack_size(*a);
	chunk = (size <= 100) ? 15 : 30;
	low = 0;
	high = chunk - 1;
	while (*a)
	{
		mid = (low + high) / 2;
		if ((*a)->index >= low && (*a)->index <= high)
		{
			stack_push(b, a);
			if ((*b)->index < mid)
				stack_rotate(b);
			low++;
			high++;
		}
		else if ((*a)->index < low)
		{
			stack_push(b, a);
			stack_rotate(b);
			low++;
			high++;
		}
		else
			stack_rotate(a);
	}
}
