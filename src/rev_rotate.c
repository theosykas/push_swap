/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:13:43 by theo              #+#    #+#             */
/*   Updated: 2025/06/13 23:57:49 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_stack *stack);


void	rrb(t_stack *stack);


void	rrr(t_stack *stack)
{
	if (!stack)
		exit_and_free(NULL, stack);
	rra(stack);
	rrb(stack);
	ft_putstr_fd("rrr\n", 1);
	return (EXIT_SUCCESS);
}
