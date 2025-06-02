/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:12:40 by theo              #+#    #+#             */
/*   Updated: 2025/06/02 17:44:40 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	exit_and_free(t_node *node, t_stack *stack)
{
	ft_putstr_fd("ERROR\n", 2);
	free_stack(stack);
	free (node);
	free (stack);
	exit (EXIT_FAILURE);
}
/*free stack list et free node list */