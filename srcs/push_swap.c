#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	if (!parse_and_build_stack(argc, argv, &a))
		error_exit(&a);
	index_stack(a);
	if (stack_is_sorted_by_index(a))
	{
		free_stack(&a);
		return (0);
	}
	size = stack_size(a);
	if (size == 2)
		stack_swap(&a);
	else if (size == 3)
		sort_three(&a);
	else if (size <= 5)
		sort_five(&a, &b);
	else
	{
		chunk_sort(&a, &b);
		radix_sort(&a, &b);
	}
	free_stack(&a);
	return (0);
}
