#include "push_swap.h"

int	*parse_numbers(char **nums, int count)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * count);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < count)
	{
		if (!ft_atol_safe(nums[i], &arr[i]))
		{
			free(arr);
			return (NULL);
		}
		i++;
	}
	if (has_duplicate(arr, count))
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}
