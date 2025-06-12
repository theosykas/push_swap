/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_numeric.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:24:49 by theo              #+#    #+#             */
/*   Updated: 2025/06/12 15:31:46 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_digit_or_sign(char c)
{
	return ((c >= '0' && c <= '9') || c == '+' || c == '-');
}

int	input_valid_numeric(char *str)
{
	if (!*str || !str)
		return (0);
	if (*str == '+' || *str == '-')
		str++;
	if (!(*str >= '0' && *str <= '9'))
	/*One digit after the sign means return (0)*/
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/*stack : check the list*/
int	has_duplicates(t_node *stack)
{
	t_node	*current; /*check each node as well*/
	t_node	*checker; /*navigate each position of current and compares*/

	if (!stack)
		return (0);
	current = stack;
	while (current)
	{
		checker = current->next;
		while (checker)
		{
			if (current->value == checker->value)
				return (0);
			checker = checker->next;
		}
		current = current->next;
	}
	return (1);
}
