/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:29:51 by theo              #+#    #+#             */
/*   Updated: 2025/06/10 10:01:55 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*fonction de doublons */

int	has_duplicates(t_node *stack) // stack : parcours la liste
{
	t_node	*current; // parcours chaques node
	t_node	*checker; // parcours chaques pos de current et cmp

	if (!stack)
		return (1);
	current = stack;
	while (current)
	{
		checker = current->next;
		while (checker)
		{
			if (current->value == checker->value) // valu sinion 2 pointer a NULL
				return (1);
			checker = checker->next;
		}
		current = current->next;
	}
	return (0);
}

void	is_sorted_a(t_node *stack)
{
	t_node	*current;
	
	if (!stack || !stack->next)
		return (1);
	current = stack;
	while (current->next)
	{
		if (current->value > current->next->value) // mal trier
			return (1);
		current = current->next;
	}
	return (0);
}
