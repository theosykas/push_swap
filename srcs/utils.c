/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:17:28 by theo              #+#    #+#             */
/*   Updated: 2025/10/06 20:09:15 by theo             ###   ########.fr       */
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

/* int	get_max(int tab[], int nbytes)
{
	int	i;
	int	get_max;

	i = 1;
	get_max = tab[0];
	while (i < nbytes)
	{
		if (tab[i] > get_max)
			get_max = tab[i];
		i++;
	}
	return (get_max);
} */
