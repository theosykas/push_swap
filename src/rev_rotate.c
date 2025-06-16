/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:13:43 by theo              #+#    #+#             */
/*   Updated: 2025/06/16 20:24:23 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
In this function, we navigate through the stack using a pointer named `checker`.
`checker` starts at the beginning of the stack and moves forward until it reaches the second-to-last node.
Then we store the last node (`current`), and we set its `next` to point to the head of the stack — moving it to the front.
We isolate the old last node by setting the second-to-last node's `next` to NULL.
Finally, we update the head of the stack to point to the former last node (`current`).
*/
static int	rev_rotate(t_node **stack)
{
	t_node	*current;
	t_node	*checker;

	if (!stack || !*stack || !(*stack)->next)
		return (EXIT_FAILURE);
	checker = *stack;
		while (checker->next->next)
		checker = checker->next;
	current = checker->next;
	current->next = *stack; /*start of the stack*/
	checker->next = NULL;
	*stack = current; /*(paste)*/
	return (EXIT_SUCCESS);
}

void	rra(t_stack *stack)
{
	rev_rotate(&stack->a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack *stack)
{
	rev_rotate(&stack->b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack *stack)
{
	if (!stack)
		exit_and_free(NULL, stack);
	rra(stack);
	rrb(stack);
	ft_putstr_fd("rrr\n", 1);
	return (EXIT_SUCCESS);
}
