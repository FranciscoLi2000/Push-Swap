/* ========================= index.c ========================= */
#include "push_swap.h"

static void	quick_sort(int *a, int l, int r)
{
	int	i;
	int	j;
	int	p;
	int	tmp;

	i = l;
	j = r;
	p = a[(l + r) / 2];
	while (i <= j)
	{
		while (a[i] < p)
			i++;
		while (a[j] > p)
			j--;
		if (i <= j)
		{
			tmp = a[i];
			a[i++] = a[j];
			a[j--] = tmp;
		}
	}
	if (l < j)
		quick_sort(a, l, j);
	if (i < r)
		quick_sort(a, i, r);
}

int	*sorted_copy(int *arr, int n)
{
	int	*cpy;
	int	i;

	cpy = malloc(sizeof(int) * n);
	if (!cpy)
		error_exit();
	i = 0;
	while (i < n)
	{
		cpy[i] = arr[i];
		i++;
	}
	quick_sort(cpy, 0, n - 1);
	return (cpy);
}

int	get_index(int *sorted, int n, int val)
{
	int	l;
	int	r;
	int	m;

	l = 0;
	r = n - 1;
	while (l <= r)
	{
		m = (l + r) / 2;
		if (sorted[m] == val)
			return (m);
		if (sorted[m] < val)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
