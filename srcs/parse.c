/* ========================= parse.c ========================= */
#include "push_swap.h"
/*
long	ft_atol(const char *s)
{
	long	sign;
	long	res;

	sign = 1;
	res = 0;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	if (!*s)
		error_exit();
	while (*s)
	{
		if (*s < '0' || *s > '9')
			error_exit();
		res = res * 10 + (*s - '0');
		if ((res * sign) > 2147483647 || (res * sign) < -2147483648)
			error_exit();
		s++;
	}
	return (res * sign);
}
*/
long	ft_atol(const char *s)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	if (!*s)
		error_exit();
	while (*s)
	{
		if (*s < '0' || *s > '9')
			error_exit();
		res = res * 10 + (*s - '0');
		if ((sign == 1 && res > 2147483647) || (sign == -1 && res > 2147483648))
			error_exit();
		s++;
	}
	return (res * sign);
}

int	*parse_args(int ac, char **av, int *n)
{
	int	*arr;
	int	i;
	int	j;

	if (ac < 2)
		return (NULL);
	arr = malloc(sizeof(int) * (ac - 1));
	if (!arr)
		error_exit();
	i = 1;
	while (i < ac)
	{
		arr[i - 1] = (int)ft_atol(av[i]);
		j = 0;
		while (j < i - 1)
		{
			if (arr[j] == arr[i - 1])
				error_exit();
			j++;
		}
		i++;
	}
	*n = ac - 1;
	return (arr);
}
