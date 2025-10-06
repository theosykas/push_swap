/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 23:45:31 by theo              #+#    #+#             */
/*   Updated: 2025/10/06 20:07:57 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
ra (rotate a): Shift up all elements of stack a by 1.
		The first element becomes the last one.
*/

int	rotate(t_node **head)
{
	t_node	*tmp;

	if (!*head || !(*head)->next)
		return (false);
	tmp = *head;
	while ((*head)->next)
		*head = (*head)->next; //lstlast
	(*head)->next = tmp;
	tmp->next = NULL;
	return (true);
}

void	ra(t_stack *stack)
{
	rotate(&stack->a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack *stack)
{
	rotate(&stack->b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *stack)
{
	rotate(&stack->a);
	rotate(&stack->b);
	ft_putstr_fd("rr\n", 1);
}
