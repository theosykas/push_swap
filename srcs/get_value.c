/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:26:18 by theo              #+#    #+#             */
/*   Updated: 2025/10/17 11:44:59 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_size(t_stack *stack)
{
	t_node *current;
	int stack_size;

	if (!stack || !stack->a)
		return (false);
	stack_size = 0;
	current = stack->a;
	while (current)
	{
		stack_size++;
		current = current->next;
	}
	return (stack_size);
}

t_node	*get_max(t_node *head)
{
	t_node *max;
	t_node	*current;

	if (!head)
		return (NULL);
	max = head;
	current = head->next;
	while (current)
	{
		if (current->value > max->value)
			max = current;
		current =current->next;
	}
	return (max);
}

t_node	*get_min(t_node *head)
{
	t_node	*min;
	t_node	*current;
		
	if (!head)
		return (NULL);
	min = head;
	current = head->next;
	while (current)
	{
		if (current->value < min->value)
			min = current;
		current = current->next;
	}
	return (min);
}

int	get_stack_pos(t_node *head,t_content *content, int value)
{
	t_node *current;

	if (!head)
		return (-1);
	current = head;
	content->pos = 0;
	while(current)
	{
		if (current->value == value)
			return (content->pos);
		content->pos++;
		current = current->next;
	}
	return (-1);
}
