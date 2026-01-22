#include "push_swap.h"

void	radix_sort(t_node **a, t_node **b)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;

	max_bits = get_max_bits(stack_max_by_index(*a)->index);
	i = 0;
	while (i < max_bits)
	{
		size = stack_size(*a);
		j = 0;
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				stack_rotate(a);
			else
				stack_push(b, a);
			j++;
		}
		while (*b)
			stack_push(a, b);
		i++;
	}
}
