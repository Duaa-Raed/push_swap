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

void    index(t_stack *stack_a)
{
    size_t count;
    t_stack *current;
    t_stack *compere;
    
    if (!stack_a)
        return ;
    current = stack_a;
    while (current)
    {
        count = 0;
        compere =  stack_a;
        while (compere)
        {
            if(compere->value < current->value)
            count++;
            compere = compere->next;
        }
        current->index = count;
        current = current->next;
    }
}