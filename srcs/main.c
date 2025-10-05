/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:53:24 by theo              #+#    #+#             */
/*   Updated: 2025/10/05 19:15:53 by theo             ###   ########.fr       */
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
	if (ac < 2)
	{
		return (1);
	}
	if (!check_args(ac, av))
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	return(0);
}

//init_stack pour appeler is sorted dans le main simplement deja connard 
//stack.a = NULL;
//	stack.b = NULL;
