/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:13:45 by theo              #+#    #+#             */
/*   Updated: 2025/06/16 20:16:24 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
We start by storing the head of the stack in a variable called `data`.
Then we update the head of the stack to point to the second element, effectively removing the first element from the front.
Next, we traverse the list using a pointer called `rotate` until we reach the last node.
We attach the original first node (`data`) to the end of the list by setting `rotate->next = data`.
Finally, we set `data->next = NULL` to mark it as the new last node in the stack.
This completes the rotate operation: the top of the stack becomes the bottom.
*/
static int	rotate(t_node **stack)
{
	t_node	*current;
	t_node	*checker;

	if (!stack || !*stack || !(*stack)->next)
		return (EXIT_FAILURE);
	current = *stack;
	checker = *stack;
	*stack = current->next;
	while (checker->next)
		checker = checker->next;
	checker->next = current;
	current->next = NULL;
	return (EXIT_SUCCESS);
}

void	ra(t_stack *stack)
{
	rotate(&stack->a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack *stack)
{
	rotate(&stack->b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *stack)
{
	if (!stack)
		exit_and_free(NULL, stack);
	ra(stack);
	rb(stack);
	ft_putstr_fd("rr\n", 1);
	//return (EXIT_SUCCESS);
}
