/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 21:06:22 by theo              #+#    #+#             */
/*   Updated: 2025/09/27 17:41:26 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// O(n * log n)


/*find_max_int_and_sort*/
int	get_max(int tab[], int nbytes)
{
	int	i;
	int	get_max;

	i = 1;
	get_max = tab[0];
	while (i < nbytes)
	{
		if (tab[i] > get_max)
			get_max = tab[i];
		i++;
	}
	return (get_max);
}

/*
tab = {12, -42, 123, 2, 7}
tab[0] = 12
tab[1] = 43 / while (i < n) : nbytes tab[5]
stock in get_max
*/


