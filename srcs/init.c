/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:42:46 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 12:23:32 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*new_node(int value)
{
	t_node	*new_node;

	new_node = ft_calloc(1, sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

t_stack *stack_init(void)
{
	t_stack *stack_init;

	stack_init = ft_calloc(1, sizeof(t_stack));
	if (!stack_init)
		return (NULL);
	stack_init->a = NULL;
	stack_init->b = NULL;
	return (stack_init);
}

t_content	*content_init(int pos)
{
	t_content *content;

	content = ft_calloc(sizeof(t_content), 1);
	if (!content)
		return (NULL);
	content->pos = pos;
	content->n_ra = 0;
	content->n_rb = 0;
	content->n_rr = 0;
	content->n_rra = 0;
	content->n_rrb = 0;
	content->n_rrr = 0;
	content->total_cost = 0;
	return (content);
}

//content struct
/* int	n_rr;
	int	n_ra;
	int	n_rb;
	int	n_rrr;
	int	n_rra;
	int	n_rrb;
	int	total_cost; */