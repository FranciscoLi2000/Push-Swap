#include "push_swap.h"

void	sort_three(t_node **a)
{
	int	top;
	int	mid;
	int	bot;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
	top = (*a)->index;
	mid = (*a)->next->index;
	bot = (*a)->next->next->index;
	if (top > mid && mid < bot && top < bot)
		stack_swap(a);			/* 1 0 2 */
	else if (top > mid && mid > bot)
	{
		stack_swap(a);			/* 2 1 0 */
		stack_reverse_rotate(a);
	}
	else if (top > mid && mid < bot && top > bot)
		stack_rotate(a);		/* 2 0 1 */
	else if (top < mid && mid > bot && top < bot)
	{
		stack_swap(a);			/* 0 2 1 */
		stack_rotate(a);
	}
	else if (top < mid && mid > bot && top > bot)
		stack_reverse_rotate(a);	/* 1 2 0 */
}
