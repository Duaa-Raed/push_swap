#include "push_swap.h"

static void sort_three(t_stack **stack_a)
{
	int first = (*stack_a)->value;
	int second =(*stack_a)->next->value;
	int third = (*stack_a)->next->next->value;

	if(first > second && second < third && first < third)
		sa(stack_a, bench);
	else if(first > second && second > third)
	{
		sa(stack_a, bench);
		rra(stack_a, 'a');
	}
	else if(first > second && second < third && first > third)
		rr(stack_a, bench);
	else if (first < second && second > third && first < third)
	{
		sa(stack_a, bench);
		rr(stack_a, bench);
	}
	else if(first < second && second > third && first > third)
		rra(stack_a, bench);
}
