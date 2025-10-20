/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_content.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:27:19 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 18:53:27 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	content_rotate_a(t_content *content,t_stack *stack)
{
	int	i;

	if (!content || !stack)
		return ;
	i = 0;
	while (i < content->n_ra)
	{
		ra(stack);
		i++;
	}
	i = 0;
	while (i < content->n_rr)
	{
		rr(stack);
		i++;
	}
}

void	content_rotate_b(t_content *content, t_stack *stack)
{
	int	i;

	i = 0;
	while (i < content->n_rb)
	{
		rb(stack);
		i++;
	}
	i = 0;
	while (i < content->n_rr)
	{
		rr(stack);
		i++;
	}
}

void	content_rev_rotate_a(t_content *content,t_stack *stack)
{
	int	i;
	
	if (!content || !stack)
		return ;
	i = 0;
	while (i < content->n_rra)
	{
		rev_rotate_a(stack);
		i++;
	}
	i = 0;
	while (i < content->n_rrr)
	{
		rev_rotate_ab(stack);
		i++;
	}
}

void	content_rev_rotate_b(t_content *content, t_stack *stack)
{
	int	i;

	i = 0;
	while (i < content->n_rrb)
	{
		rev_rotate_b(stack);
		i++;
	}
	i = 0;
	while (i < content->n_rrr)
	{
		rev_rotate_ab(stack);
		i++;
	}
}
