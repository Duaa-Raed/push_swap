#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack*next;
}t_stack;

typedef struct s_bench
{
	int	count[11];
}	t_bench;

void    assign_index(t_stack *stack_a);
void    push_chunks_to_b(t_stack **stack_a, t_stack **stack_b, int size);
double	compute_disorder(t_stack *stack_a);
int		stack_size(t_stack *stack);
void	pa(t_stack **a, t_stack **b, t_bench *bench);
void	pb(t_stack **a, t_stack **b, t_bench *bench);
void	ra(t_stack **a, t_bench *bench);
void	rra(t_stack **a, t_bench *bench);
void	sort_simple(t_stack **a, t_stack **b, t_bench *bench);

#endif