/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 23:45:29 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 20:13:33 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rev_rotate(t_node **head)
{
	t_node	*lst;

	if (!*head || !(*head)->next)
		return (false);
	lst = *head;
	while (lst->next)
		lst = lst->next;
	lst->prev->next = NULL; //discon
	lst->next = *head; // lst = top
	lst->prev = NULL; //av ls NULL
	(*head)->prev = lst;
	*head = lst;
	return (true);
}

void	rev_rotate_a(t_stack *stack)
{
	rev_rotate(&stack->a);
	ft_putstr_fd("rra\n", 1);
}

void	rev_rotate_b(t_stack *stack)
{
	rev_rotate(&stack->b);
	ft_putstr_fd("rra\n", 1);
}

void	rev_rotate_ab(t_stack *stack)
{
	rev_rotate(&stack->a);
	rev_rotate(&stack->b);
	ft_putstr_fd("rra\n", 1);
}
