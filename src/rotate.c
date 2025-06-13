/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:13:45 by theo              #+#    #+#             */
/*   Updated: 2025/06/13 23:59:56 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ra(t_stack *stack);

int	rb(t_stack *stack);

int	rr(t_stack *stack)
{
	if (!stack)
		exit_and_free(NULL, stack);
	ra(stack);
	rb(stack);
	ft_putstr_fd("rr\n", 1);
	return (EXIT_SUCCESS);
}
