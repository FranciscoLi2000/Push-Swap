#include "push_swap.h"

char	**ft_strjoin_2d(char **a, char **b)
{
	char	**res;
	int		i;
	int		j;

	res = malloc(sizeof(char *) * (count_strings(a) + count_strings(b) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (a && a[i])
	{
		res[i] = ft_strdup(a[i]);
		i++;
	}
	j = 0;
	while (b && b[j])
		res[i++] = ft_strdup(b[j++]);
	res[i] = NULL;
	free_2d(a);
	return (res);
}
