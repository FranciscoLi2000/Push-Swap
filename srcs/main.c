/* ========================= main.c ========================= */
#include "push_swap.h"

static t_node	*new_node(int v, int i)
{
	t_node	*n;

	n = malloc(sizeof(t_node));
	if (!n)
		error_exit();
	n->val = v;
	n->idx = i;
	n->next = NULL;
	return (n);
}

static t_node	*build_stack(int *arr, int *sorted, int n)
{
	t_node	*a;
	t_node	*tmp;
	int		i;

	a = NULL;
	i = n - 1;
	while (i >= 0)
	{
		tmp = new_node(arr[i], get_index(sorted, n, arr[i]));
		tmp->next = a;
		a = tmp;
		i--;
	}
	return (a);
}

int	main(int ac, char **av)
{
	int		n;
	int		*arr;
	int		*sorted;
	t_node	*a;
	t_node	*b;

	arr = parse_args(ac, av, &n);
	if (!arr)
		return (0);
	sorted = sorted_copy(arr, n);
	a = build_stack(arr, sorted, n);
	b = NULL;
	if (!is_sorted(a))
	{
		if (n == 3)
			sort_three(&a);
		else if (n <= 5)
			sort_five(&a, &b);
		else
			radix_sort(&a, &b, n);
	}
	return (0);
}
