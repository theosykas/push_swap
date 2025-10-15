/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:02:35 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 18:03:53 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*gnode_index(t_stack *stack, int value)
{
	t_node *current;

	if (!stack || !stack->a)
		return (NULL);
	current = stack->a;
	while (current)
	{
		if (current->value == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}

int	move_up(t_stack *stack, int current)
{
	int	i;
	t_node *tmp;

	i = 0;	
	if (!stack)
		return (-1);
	tmp = gnode_index(stack, current);
	while (tmp->prev)
	{
		tmp = tmp->prev;
		i++;
	}
	return (i);
}

int	move_down(t_stack *stack, int current)
{
	int	i;
	t_node *tmp;

	i = 0;
	if (!stack)
		return (-1);
	tmp = gnode_index(stack, current);
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}



//all t_content
//find_solve
//apply_mouv
//push
