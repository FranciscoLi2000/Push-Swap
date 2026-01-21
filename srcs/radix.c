/* ========================= radix.c ========================= */
#include "push_swap.h"

void	radix_sort(t_node **a, t_node **b, int n)
{
	int	max;
	int	bit;
	int	i;

	max = n - 1;
	bit = 0;
	while ((max >> bit) != 0)
		bit++;
	while (bit--)
	{
		i = n;
		while (i--)
		{
			if (((*a)->idx >> bit) & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (*b)
				pa(a, b);
	}
}
