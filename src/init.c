/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:12:34 by theo              #+#    #+#             */
/*   Updated: 2025/06/12 15:19:57 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


/*Creates a new node containing a value to be sorted.
Each time a value is added to the stack, this function is used to create the corresponding node.*/

t_node	*create_node(int value)
{
	t_node *new = calloc(1, sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

/*Initialize the size et the stack (A,B)*/
void	init_stack(t_stack *stack)
{
	stack->a = NULL;
	stack->b = NULL;
	stack->size_a = 0;
	stack->size_b = 0;
}

/*Add a node at the end of a stack or if the stack is 'NULL' 
we add at the start of the node*/
int	add_node(t_node **stack, t_node *new_element)
{
	t_node	*tmp;

	if (!new_element)
		return (EXIT_FAILURE);
	if (*stack == NULL)
	{
		*stack = new_element;
		return (EXIT_SUCCESS);
	}
	tmp = *stack;
	while (tmp->next) /*as long as the next element exists, we check*/
	{
		tmp = tmp->next;
	}
	tmp->next = new_element;
	return (EXIT_SUCCESS);
}

void	is_sorted_a(t_node *stack)
{
	t_node	*current;

	if (!stack || !stack->next)
		return (1);
	current = stack;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (1);
		current = current->next;
	}
	return (0);
}
