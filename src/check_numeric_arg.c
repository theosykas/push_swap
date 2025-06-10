/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numeric_arg.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:24:49 by theo              #+#    #+#             */
/*   Updated: 2025/06/10 09:59:24 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_digit_or_sign(char c)
{
	return ((c >= '0' && c <= '9') || c == '+' || c == '-');
}

int	is_valid_num(char *str)
{
	if (!*str || !str)
		return (0);
	if (*str == '+' || *str == '-')
		str++;
	if (!(*str >= '0' && *str <= '9')) // 1 chiffre apres le sign signie return (0)
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	has_duplicates(t_node *stack) // stack : parcours la liste
{
	t_node	*current; // parcours chaques node
	t_node	*checker; // parcours chaques pos de current et cmp

	if (!stack)
		return (1);
	current = stack;
	while (current)
	{
		checker = current->next;
		while (checker)
		{
			if (current->value == checker->value) // valu sinion 2 pointer a NULL
				return (1);
			checker = checker->next;
		}
		current = current->next;
	}
	return (0);
}

