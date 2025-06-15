/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:13:43 by theo              #+#    #+#             */
/*   Updated: 2025/06/15 19:46:24 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	rev_rotate(t_node **stack)
{
	t_node	*data;
	t_node	*rev_ro;

	if (!stack || !*stack || !(*stack)->next)
		return (EXIT_FAILURE);
	data = *stack;
	rev_ro = *stack;
	*stack = data->next;
	while (rev_ro->next)
	data->next = NULL;
	return (EXIT_SUCCESS);
}

void	rra(t_stack *stack)
{
	rev_rotate(&stack->a);
	ft_putstr_fd("rra\n", 1);
}


void	rrb(t_stack *stack)
{}


void	rrr(t_stack *stack)
{
	if (!stack)
		exit_and_free(NULL, stack);
	rra(stack);
	rrb(stack);
	ft_putstr_fd("rrr\n", 1);
	return (EXIT_SUCCESS);
}
