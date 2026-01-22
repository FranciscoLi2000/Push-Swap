#include "push_swap.h"

void	build_stack(t_node **a, int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack_add_back(a, stack_new(arr[i]));
		i++;
	}
}
