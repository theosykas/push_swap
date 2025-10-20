/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:43:53 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 16:26:55 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_content(t_content *content, t_rotate *res, int pos)
{
	if (!content || !res)
		return ;
	content->pos = pos;
	content->n_rr = res->n_rr;
	content->n_ra = res->n_ra;
	content->n_rb = res->n_rb;
	content->n_rrr = 0;
	content->n_rra = 0;
	content->n_rrb = 0;
	content->total_cost = res->total_rotate;
}

void	rev_rotate_content(t_content *content, t_rev_rotate *res, int pos)
{
	if (!content || !res)
		return ;
	content->pos = pos;
	content->n_rrr = res->n_rrr;
	content->n_rra = res->n_rra;
	content->n_rrb = res->n_rrb;
	content->n_rr = 0;
	content->n_ra = 0;
	content->n_rb = 0;
	content->total_cost = res->total_rev_rotate;
}
