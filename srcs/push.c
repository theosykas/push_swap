/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 23:45:27 by theo              #+#    #+#             */
/*   Updated: 2025/10/06 16:20:57 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* pa (push a): Take the first element at the top of b and put it at the top of a.
		Do nothing if b is empty.
*/

int	push(t_node **dst, t_node **src)
{
	t_node *tmp;

	if (!src || !*src)
		return (false);
	tmp = *src;
	*src = tmp->next;
	tmp->next = *dst;
	*dst = tmp;
	return (true);
}

void	push_a(t_stack *stack)
{
	push(&stack->a, &stack->b);
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_stack *stack)
{
	push(&stack->b, &stack->a);
	ft_putstr_fd("pb\n", 1);
}

void	push_pp(t_stack *stack)
{
	push(&stack->a, &stack->b);
	push(&stack->b, &stack->a);
	ft_putstr_fd("pp\n", 1);
}
