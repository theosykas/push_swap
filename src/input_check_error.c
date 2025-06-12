/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:12:40 by theo              #+#    #+#             */
/*   Updated: 2025/06/12 15:12:44 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	exit_and_free(t_node *node, t_stack *stack)
{
	ft_putstr_fd("ERROR\n", 2);
	free_stack(stack);
	free (node); /*only free for just one node */
	exit (EXIT_FAILURE);
}

/*free all node (stack)*/
int	free_stack(t_stack *stack)
{
	if (!stack)
		return (1);
	free_node(stack->a);
	free_node(stack->b);
	free(stack);
	return (0);
}

void	free_node(t_node *node)
{
	t_node *tmp;

	while (node)
	{
		tmp = node->next;
		free (node);
		node = tmp;
	}
}
