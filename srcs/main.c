/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:53:24 by theo              #+#    #+#             */
/*   Updated: 2025/10/11 22:05:34 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_args(int ac, char **av)
{
	int	i;

	(void)ac;
	i = 1; // -> av[1]
	if (!ft_atol(av[i]))
		return (false);
	if (!has_duplicated(ac, av)) // all_array
		return (false);
	return (1);
}

int	main(int ac, char **av)
{
	t_stack *stack;
	t_node	*n_node;
	long	value;
	int		i;

	if (ac < 2)
		return (1);
	if (!check_args(ac, av))
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	stack = stack_init();
	i = 1;
	while (i < ac)
	{
		value = ft_atol(av[i]);
		n_node = new_node(value);
		ft_add_back(&(stack->a), n_node);
		i++;
	}
	//sort three
	return(0);
}


/* current = stack->a;
	while (current)
	{
		printf("%ld\n", current->value);
		current = current->next;
	}
 */
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
	swap_a(stack);
	stack->b = new_node(2);
	stack->b->next = new_node(1);
	swap(stack->b);
	swap_b(stack);
	stack->a = new_node(1);
	stack->b = new_node(3);
	printf("pa : %d\n", push_a(stack));
	return(0);
}
 */


//init_stack pour appeler is sorted dans le main simplement deja connard 
//stack.a = NULL;
//	stack.b = NULL;
