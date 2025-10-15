/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_content.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:33:56 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 18:23:27 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	fill_content(t_content *content,t_stack *stack,  int value)
{
	if (!content || !stack || !stack->a)
		return ;
	content->pos = get_stack_pos(stack->a,content, value); //pos in a stack
	content->top = move_up(stack, value); // cost to up
	content->bottom = move_down(stack, value);
}
