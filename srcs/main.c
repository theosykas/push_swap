/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:53:24 by theo              #+#    #+#             */
/*   Updated: 2025/10/06 00:55:29 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_args(int ac, char **av)
{
	int	i;

	(void)ac;
	i = 1; // -> av[0]
	if (!ft_atol(av[i]))
		return (false);
	if (!has_duplicated(ac, av)) // all_array
		return (false);
	return (1);
}

int	main(int ac, char **av)
{
	t_stack *stack;

	if (ac < 2)
	{
		return (1);
	}
	if (!check_args(ac, av))
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	stack = stack_init();
	//stack->a = new_node(2);
	//stack->a->next = new_node(1);
	swap(stack->a);
	swap_a(stack);
	//stack->b = new_node(2);
	//stack->b->next = new_node(1);
	swap(stack->b);
	swap_b(stack);
	return(0);
}

/* int	main(int ac, char **av)
{
	t_stack *stack;

	if (ac < 2)
	{
		return (1);
	}
	if (!check_args(ac, av))
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	stack = stack_init();
	stack->a = new_node(2);
	stack->a->next = new_node(1);
	swap(stack->a);
	printf("sa : %d\n", stack->a->value);
	printf("sa : %d\n", stack->a->next->value);
	return(0);
} */

//init_stack pour appeler is sorted dans le main simplement deja connard 
//stack.a = NULL;
//	stack.b = NULL;
