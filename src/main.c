/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:26:22 by theo              #+#    #+#             */
/*   Updated: 2025/06/05 18:22:06 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	if (ac < 2)
		exit_and_free(NULL, NULL); // 2 param node stack tout a null
	t_stack *stack = calloc(1, sizeof(t_stack));
	if (!stack)
		exit_and_free (NULL, stack);
	if (has_duplicates (stack->a))
		exit_and_free(stack->a, stack);
	init_stack(stack);
	return (EXIT_SUCCESS);
}
