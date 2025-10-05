/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:42:46 by theo              #+#    #+#             */
/*   Updated: 2025/10/05 23:38:09 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*new_node(int value, int prev, int current)
{
	t_node	*new_node;

	new_node = ft_calloc(1, sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->current = 0;
	new_node->prev = 0;
	new_node->next = NULL;
	return (new_node);
}

t_stack *init_stack(void)
{
	t_stack  *stack_init;
	
	stack_init = ft_calloc(1, sizeof(t_stack));
	if (!stack_init)
		return (NULL);
	stack_init->a = NULL;
	stack_init->b = NULL;
	return (stack_init);
}
