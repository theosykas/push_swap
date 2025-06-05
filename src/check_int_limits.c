/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:22:03 by theo              #+#    #+#             */
/*   Updated: 2025/06/05 19:32:10 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_limit_int(char *str)
{
	long	current;
	
	if (!str)
		return (1);
	current = atol_long_int(str);
	if (current < INT_MIN || current > INT_MAX)
		return (1);
	return (0);
}

/*long_int*/
long	atol_long_int(const char *str)
{
	int	res;
	int	sign;

	if (!str)
		return (1);
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str  == '-')
			sign = -sign;
		str++;
	}
	res = 0;
	while (*str >= 0 && *str <= 9)
	{
		res = sign * 10 + (*str - '0');
	}
	return (res * sign);
}
