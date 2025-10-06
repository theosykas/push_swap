/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 23:45:33 by theo              #+#    #+#             */
/*   Updated: 2025/10/06 15:18:02 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	swap(t_node *head)
{
	int	tmp;

	if (!head || !head->next)
		return (false);
	tmp = head->value;
	head->value = head->next->value;
	head->next->value = tmp;
	return (true);
}

void	swap_a(t_stack *stack)
{
	swap(stack->a);
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_stack *stack)
{
	swap(stack->b);
	ft_putstr_fd("sb\n", 1);
}

void	swap_ss(t_stack *stack)
{
	swap(stack->a);
	swap(stack->b);
	ft_putstr_fd("ss\n", 1);
}
