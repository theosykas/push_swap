/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 23:45:29 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 20:13:33 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int rev_rotate(t_node **head)
{
    t_node *prev;
    t_node *last;

    if (!head || !*head || !(*head)->next)
        return (0);
    prev = NULL;
    last = *head;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *head;
    *head      = last;
    return (1);
}

void	rev_rotate_a(t_stack *stack)
{
	rev_rotate(&stack->a);
	ft_putstr_fd("rra\n", 1);
}

void	rev_rotate_b(t_stack *stack)
{
	rev_rotate(&stack->b);
	ft_putstr_fd("rrb\n", 1);
}

void	rev_rotate_ab(t_stack *stack)
{
	rev_rotate(&stack->a);
	rev_rotate(&stack->b);
	ft_putstr_fd("rrr\n", 1);
}
