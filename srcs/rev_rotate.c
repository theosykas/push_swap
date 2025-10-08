/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 23:45:29 by theo              #+#    #+#             */
/*   Updated: 2025/10/08 19:55:30 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* rra (reverse rotate a): Shift down all elements of stack a by 1.
		The last element becomes the first one.
	rrb (reverse rotate b): Shift down all elements of stack b by 1.
		The last element becomes the first one.
	rrr : rra and rrb at the same time. */

/* int	rev_rotate(t_node **head)
{
	t_node	*last;

	if (!*head || !(*head)->next)
		return (false);
	last = *head;
	while (last->next)
		last = last->next; //lst
	last->prev->next = NULL;  //head -> 1 <-> 2 <-> 3 <-> 4	5 (4->next = NULL)
	last->prev = NULL; //premier donc pas de prev devant lui
	last->next = *head; // -> 1 
	(*head)->prev = last;
	*head = last; // plus 1 mais 5
	return (true);
} */

int	rev_rotate(t_node **head)
{
	t_node	*lst;

	if (!*head || !(*head)->next)
		return (false);
	lst = *head;
	while (lst->next)
		lst = lst->next;
	lst->prev->next = NULL;
	lst->prev = NULL;
	lst->next = *head;
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
