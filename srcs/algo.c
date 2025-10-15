/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:24:36 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 20:21:17 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*move_to_stack(t_content *content, t_stack *stack)
{
	t_node		*current;
	t_node		*solve_node; // cost -
//	int			final_node;
	int			final_cost;
	int			min_cost;

	current = stack->a;
//	final_node = 0;
	min_cost = INT_MAX;
	while (current)
	{
		fill_content(content, stack, current->value);
		final_cost = calculate_cost(content);
		if (final_cost < min_cost)
		{
			min_cost = final_cost;
			solve_node = current;
//			final_node = current->value;
		}
		current = current->next;
	}
	sort_content(content, stack);
	push(&stack->b, &stack->a);
	return gnode_index(stack, solve_node->value);
}


//move_to_top 

/* boucle principale qui :
Répète le process tant que la pile a n’est pas triée ou vide.
Appelle move_to_stack, applique les moves, puis push dans b.
Gère le retour des éléments de b vers a à la fin. */