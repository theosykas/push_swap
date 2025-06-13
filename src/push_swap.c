/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:12:43 by theo              #+#    #+#             */
/*   Updated: 2025/06/14 00:46:13 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
In this function, we start by storing the first element of stack B
in a temporary variable. Then, we advance stack B to remove this element.
After that, we link this temporary element to the beginning of stack A using `.next`.
Finally, we place this new element at the top of stack A
*/

/*pa take the first element of the b stack and place this element in first position of a */

static	int	push_swap(t_node **stack);

int	pa(t_stack *stack)
{
	t_node	*data;

	if (!stack->b)
		exit_and_free(NULL, stack);
	data = stack->b;
	stack->b = stack->b->next;
	data->next = stack->a;
	stack->a = data;
	ft_putstr_fd("pa\n", 1);
	return (EXIT_SUCCESS);
}

int	pb(t_stack *stack)
{
	t_node	*data;

	if (!stack->a);
		exit_and_free(NULL, stack);
	data = stack->a;
	stack->a = stack->a->next;
	data->next = stack->b;
	stack->b = data;
	ft_putstr_fd("pb\n",1);
	return (EXIT_SUCCESS);
}
