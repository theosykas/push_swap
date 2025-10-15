/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:53:24 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 18:07:08 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_args(int ac, char **av)
{
	int	i;

	(void)ac;
	i = 1;
	if (!ft_atol(av[i]))
		return (false);
	if (!has_duplicated(ac, av))
		return (false);
	return (1);
}

// on libere le prev {1 = tmp, 2 = main pointer} free (1);
void	free_stack(t_stack *stack)
{
	t_node *tmp;

	if (!stack)
		return ;
	if (stack->a)
	{
		while (stack->a)
		{
			tmp = stack->a;
			stack->a = stack->a->next;
			free(tmp);
		}
	}
	if (stack->b)
	{
		while (stack->b)
		{
			tmp = stack->b;
			stack->b = stack->b->next;
			free(tmp);
		}
	}
	free(stack);
	return ;
}

int	main(int ac, char **av)
{
	t_stack *stack;
	t_node	*n_node;
	long	value;
	int		i;

	if (ac < 2)
		return (1);
	stack = stack_init();
	if (!check_args(ac, av) || !stack)
	{
		free_stack(stack);
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	i = 1;
	while (i < ac)
	{
		value = ft_atol(av[i]);
		n_node = new_node(value);
		ft_add_back(&(stack->a), n_node);
		get_min(stack->a);
		i++;
	}
	/* printf("min %d\n",get_min(stack->a)->value);
	printf("max %d\n", get_max(stack->a)->value); */
	return(0);
}
