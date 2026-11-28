/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 10:33:43 by dalinein          #+#    #+#             */
/*   Updated: 2026/11/25 10:41:30 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    assign_index(t_stack *stack_a)
{
    int count;
    t_stack *current;
    t_stack *compare;
    
    if (!stack_a)
        return ;
    current = stack_a;
    while (current)
    {
        count = 0;
        compare =  stack_a;
        while (compare)
        {
            if(compare->value < current->value)
            count++;
            compare = compare->next;
        }
        current->index = count;
        current = current->next;
    }
}