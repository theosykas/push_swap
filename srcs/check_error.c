/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:42:18 by theo              #+#    #+#             */
/*   Updated: 2025/10/05 23:38:39 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	ft_atol(char *s)
{
	long	i;
	long	sign;
	long	res;

	i = 0;
	sign = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	res = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	if ((res * sign) < INT_MIN || (res * sign) > INT_MAX)
		return (false);
	return (res * sign);
}

int	has_duplicated(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atol(av[i]) == ft_atol(av[j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

/* void	exit_and_free(t_stack *stack, t_node *node)
{
	if (!node)
		free(node);
	if (!stack)
		free(stack);
}
 */