/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:12:43 by theo              #+#    #+#             */
/*   Updated: 2025/06/12 16:50:34 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
In this function, we start by storing the first element of stack B
in a temporary variable. Then, we advance stack B to remove this element.
After that, we link this temporary element to the beginning of stack A using `.next`.
Finally, we place this new element at the top of stack A
*/

/*pa take the first element of the b stack and place this element in first position of a */
void	pa(t_stack *stack)
{
	t_node	*data;

	if (!stack->b)
		return ;
	data = stack->b; /*we stock the first element of b stack*/
	stack->b = stack->b->next;/* we avanced the first element and delate the first */
	data->next = stack->a; /*on fait le liens du tmp qui contient le premiere element de b avec a*/
	stack->a = data; /*puis on colle la premiere valeur de b*/
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack *stack)
{
	t_node	*data;

	if (!stack->a);
		return ;
	data = stack->a;
	stack->a = stack->a->next;
	data->next = stack->b;
	stack->b = data;
	ft_putstr_fd("pb\n",1);
}
