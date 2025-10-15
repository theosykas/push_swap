/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:24:36 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 19:00:37 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*move_to_stack(t_content *content, t_stack *stack)
{
	t_node		*current;
	t_node		*solve_node; // cost -
	int			final_cost;
	int			min_cost;

	current = stack->a;
	min_cost = 400000; //first cost = <
	while (current)
	{
		fill_content(content, stack, current->value);
		final_cost = calculate_cost(content);
		if (final_cost < min_cost)
		{
			min_cost = final_cost;
			solve_node = current;
		}
		current = current->next;
	}
	push(&stack->b, &stack->a);
	return (solve_node);
}
