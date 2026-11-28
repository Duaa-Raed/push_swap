#include <stdio.h>
#include "push_swap.h"

int	main(void)
{
	t_stack	third = {12, -1, NULL};
	t_stack	second = {-5, -1, &third};
	t_stack	first = {40, -1, &second};
	t_stack	*current;

	assign_index(&first);
	current = &first;
	while (current)
	{
		printf("value: %d  index: %d\n", current->value, current->index);
		current = current->next;
	}
	return (0);
}