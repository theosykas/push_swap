/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:24:36 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 12:47:38 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*find_gnode(t_content *content, t_stack *stack)
{
	t_node		*current;
	t_node		*solve_node; // cost -
	int			final_cost;
	int			min_cost;

	current = stack->a;
	min_cost = INT_MAX;
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
	return (solve_node);
}

/*move g_node (solveNode) to top of stack*/
	//pos <= 2 : ra (top)
	//pos > 2 : (down) rra
/*we call g_node in param link to theo fond_gnode function*/
void	move_gnode_to_top(t_content *content, t_stack *stack, t_node *gnode)
{
	int	pos;
	int	size;

	size = stack_size(stack);
	pos = get_stack_pos(stack->a, content, gnode->value);
	if (pos <= size / 2)
		while (stack->a != gnode)
			ra(stack);
	else
		while (stack->a != gnode)
			rev_rotate_a(stack);
}

/*this func push the solve node to the top of the stack*/
void	exec_move(t_content *content,t_stack *stack, t_node *gnode)
{
	fill_content(content, stack, gnode->value);
	sort_content(content, stack);
	push_b(stack);
}

