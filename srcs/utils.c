/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:17:28 by theo              #+#    #+#             */
/*   Updated: 2025/09/28 22:14:19 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		is_sorted_a(t_stack *stack)
{
	t_node	*current;

	current = stack->a;
	if (!current)
		return (true);
	while (current->next)
	{
		if (current->value > current->next->value)
			return (false);
		current = current->next; // ++ 
	}
	return (true);
}
