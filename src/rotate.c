/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:13:45 by theo              #+#    #+#             */
/*   Updated: 2025/06/15 19:36:52 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	rotate(t_node **stack)
{
	t_node	*data;
	t_node	*rotate;

	data = *stack; // on prend la premiere valeur
	rotate = *stack; // on parcours 
	*stack = data->next; // deuxieme valu egale premire 
	if (!stack || !*stack || !(*stack)->next)
		return (EXIT_FAILURE);
	while (rotate->next) // jusqua NULL
		rotate = rotate->next; // avance jusqua la derniere valeur 
	rotate->next = data; // colle la 1 valeur en fin de list 
	data->next = NULL; // arriver a NULL
	return (EXIT_SUCCESS);
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
	if (!stack)
		exit_and_free(NULL, stack);
	ra(stack);
	rb(stack);
	ft_putstr_fd("rr\n", 1);
	//return (EXIT_SUCCESS);
}
