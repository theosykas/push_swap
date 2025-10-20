/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:53:24 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 19:00:46 by theo             ###   ########.fr       */
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

void	algo_exec(t_content *content, t_stack *stack)
{
	t_node *gnode;

	while (stack->a)
	{
		gnode = find_gnode(content, stack->a);
		move_gnode_to_top(content, stack, gnode);
		exec_move(content, stack, gnode);
	}
	while (stack->b)
	{
		gnode = find_gnode(content, stack->b);
		move_gnode_b(content, stack, gnode);
		exec_move_back(content, stack, gnode); //pa
	}
}

int	main(int ac, char **av)
{
	t_stack 	*stack;
	t_node		*n_node;
	t_content 	*content;
	long		value;
	int			i;

	if (ac < 2)
		return (1);
	stack = stack_init();
	content = content_init(0, 0, 0);
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
		i++;
	}
	algo_exec(content, stack);
	free_stack(stack);
	free(content);
	return(0);
}

/* printf("min %d\n",get_min(stack->a)->value);
	printf("max %d\n", get_max(stack->a)->value); */