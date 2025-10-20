/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_content.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:53:05 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 18:53:30 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_content(t_content *content, t_stack *stack, int stack_a)
{
	if (!content || !stack)
		return ;
	if (stack_a)
	{
		content_rotate_a(content, stack);
		content_rev_rotate_a(content, stack);
	}
	else
	{
		content_rotate_b(content, stack);
		content_rev_rotate_b(content, stack);
	}
	return ;
}
