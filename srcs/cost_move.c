/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:02:35 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 16:48:26 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*gnode_index(t_node *head, int value)
{
	t_node *current;

	if (!head)
		return (NULL);
	current = head;
	while (current)
	{
		if (current->value == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}

int	move_up(t_node *head, int current)
{
	int	i;
	t_node *tmp;

	i = 0;	
	if (!head)
		return (-1);
	tmp = gnode_index(head, current);
	while (tmp->prev)
	{
		tmp = tmp->prev;
		i++;
	}
	return (i);
}

int	move_down(t_node *head, int current)
{
	int	i;
	t_node *tmp;

	i = 0;
	if (!head)
		return (-1);
	tmp = gnode_index(head, current);
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
