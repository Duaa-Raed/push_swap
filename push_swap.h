#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack*next;
}t_stack;

void    index(t_stack, *stack_a);
void    push_chunks_to_b(t_stack **stack_a, t_stack **stack_b, int size);

#endif