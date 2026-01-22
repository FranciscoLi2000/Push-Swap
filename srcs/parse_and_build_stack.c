#include "push_swap.h"

static void	free_split(char **arr)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	parse_and_build_stack(int argc, char **argv, t_node **a)
{
	char	**nums;
	int		*values;
	int		count;

	nums = split_all_args(argc, argv);
	if (!nums)
		return (0);
	count = count_strings(nums);
	values = parse_numbers(nums, count);
	free_split(nums);
	if (!values)
		return (0);
	build_stack(a, values, count);
	free(values);
	return (1);
}
