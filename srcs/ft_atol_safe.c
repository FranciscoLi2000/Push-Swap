#include "push_swap.h"

int	ft_atol_safe(char *str, int *out)
{
	long	res;
	int		sign;

	if (!str || !*str)
		return (0);
	res = 0;
	sign = 1;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	if (!*str)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		res = res * 10 + (*str - '0');
		if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
			return (0);
		str++;
	}
	*out = (int)(res * sign);
	return (1);
}
