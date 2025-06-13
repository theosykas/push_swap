/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:29:47 by theo              #+#    #+#             */
/*   Updated: 2025/06/14 01:01:08 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	swap_stack(t_node **stack) /*changer la tête de la pile. sinon juste une copie */
{
	t_node	*data;
	t_node	*swap;

	if (!stack)
		return (EXIT_FAILURE);
	if (!*stack || !(*stack)->next)
		return (EXIT_FAILURE);
	data = *stack; /*deref node*/ /* premier node*/
	swap = data->next;
	data->next = swap->next;
	swap->next = data;
	*stack = swap;
	return (EXIT_SUCCESS);
}

void	sa(t_stack *stack)
{
	swap_stack(&stack->a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *stack)
{
	swap_stack(&stack->b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *stack)
{
	swap_stack(&stack->a);
	swap_stack(&stack->b);
	ft_putstr_fd("ss\n", 1);
}

/*
int	sa(t_stack *stack)
{
	t_node	*data_a;
	t_node	*swap_a;

	if (!stack)
		exit_and_free(NULL , stack);
	if (!stack->b || !stack->a->next)
		return (EXIT_FAILURE);
	data_a = stack->a;
	swap_a = data_a->next;
	data_a->next = swap_a->next;
	swap_a->next = data_a;
	stack->a = swap_a;
	ft_putstr_fd("sa\n", 1);
	return (EXIT_SUCCESS);
}
*/
/*
int	sb(t_stack *stack)
{
	t_node	*data_b;
	t_node	*swap_b;

	if (!stack)
		exit_and_free(NULL, stack);
	if (!stack->b || !stack->b->next)
		return (EXIT_FAILURE);
	data_b = stack->b;
	swap_b = data_b->next;
	data_b->next = swap_b->next;
	swap_b->next = data_b;
	stack->b = swap_b;
	ft_putstr_fd("sb\n", 1);
	return (EXIT_SUCCESS);
}*/
/*
int	ss(t_stack *stack)
{
	if (!stack)
		exit_and_free(NULL, stack);
	sa(stack);
	sb(stack);
	ft_putstr_fd("ss\n", 1);
	return (EXIT_SUCCESS);
}
*/