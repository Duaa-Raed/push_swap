/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunks_to_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 14:28:48 by dalinein          #+#    #+#             */
/*   Updated: 2026/11/25 14:28:51 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    push_chunks_to_b(t_stack **stack_a, t_stack **stack_b, int size)
{
    int chunk_size;
    int limit;
    int pushed;

    chunk_size = size/5;
    limit = chunk_size;
    pushed = 0;
    while (!*stack_a && size > 0)
    {

    }
}