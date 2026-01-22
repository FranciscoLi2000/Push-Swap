#include "push_swap.h"

char	**split_all_args(int argc, char **argv)
{
	char	**result;
	char	**tmp;
	int		i;

	result = NULL;
	i = 1;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		if (!tmp)
			return (NULL);
		result = ft_strjoin_2d(result, tmp);
		free_2d(tmp);
		i++;
	}
	return (result);
}
