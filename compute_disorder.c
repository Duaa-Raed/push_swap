#include "push_swap.h"

double	compute_disorder(t_stack *stack_a)
{
	int mistakes;
	int total_pairs;
	t_stack *current;
	t_stack *compare;

	mistakes = 0;
	total_pairs = 0;
	current = stack_a;
	while(current)
	{
		compare = current->next;
		while(compare)
		{
			if(current->value > compare->value)
				mistakes++;
			total_pairs++;
			compare = compare->next;
		}
		current = current->next;
	}
	if(total_pairs > 0)
		return((double)mistakes / (double)total_pairs);
	return (0);
}