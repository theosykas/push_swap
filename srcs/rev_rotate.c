/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 23:45:29 by theo              #+#    #+#             */
/*   Updated: 2025/10/21 15:08:58 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int rev_rotate(t_node **head)
{
	t_node	*lst;
	t_node	*prev;

	if (!head || !*head || !(*head)->next)
		return (false);
	prev = NULL;
	lst = *head;
	while (lst->next)
	{
		prev = lst;
		lst = lst->next;
	}
	prev->next = NULL; //discon
	lst->next = *head; // lst = top
	lst->prev = NULL; //av ls NULL
	*head = lst;
	return (1);
}

void	rev_rotate_a(t_stack *stack)
{
	rev_rotate(&stack->a);
	ft_putstr_fd("rra\n", 1);
}

void	rev_rotate_b(t_stack *stack)
{
	rev_rotate(&stack->b);
	ft_putstr_fd("rrb\n", 1);
}

void	rev_rotate_ab(t_stack *stack)
{
	rev_rotate(&stack->a);
	rev_rotate(&stack->b);
	ft_putstr_fd("rrr\n", 1);
}
