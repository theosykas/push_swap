/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:30:15 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 17:30:30 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	calculate_cost(t_content *content)
{
	content->total_cost = content->n_ra + content->n_rb + content->n_rr
		+ content->n_rra + content->n_rrb +content->n_rrr;
	return (content->total_cost);
}
