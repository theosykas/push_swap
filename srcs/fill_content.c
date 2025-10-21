/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_content.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:33:56 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 17:50:07 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	fill_content(t_content *content,t_node *head, int value)
{
	if (!content)
		return ;
	content->pos = get_stack_pos(head, content, value); // position dans A
	content->top = move_up(head, value); // cost to up
	content->bottom = move_down(head, value);
}

void	update_rotation(t_content *content, int is_a)
{
	t_rotate 		rotate;
	t_rev_rotate	rev_rotate;		//local variable .

	ft_memset(&rotate, 0, sizeof(t_rotate));
	ft_memset(&rev_rotate, 0, sizeof(t_rev_rotate));
	if (is_a)
	{
		rotate.n_ra = content->top; // calulate to up
		rev_rotate.n_rra = content->bottom;
	}
	else
	{
		rotate.n_rb = content->top; // calulate to up
		rev_rotate.n_rrb = content->bottom;
	}
	rotate_cost(&rotate);
	rev_rotate_cost(&rev_rotate);				//cost_init
	content->n_ra = rotate.n_ra;
	content->n_rb = rotate.n_rb;
	content->n_rr = rotate.n_rr;
	content->n_rra = rev_rotate.n_rra;		//give_move
	content->n_rrb = rev_rotate.n_rrb;
	content->n_rrr = rev_rotate.n_rrr;

}

/*optimisation_cost_finction*/
void	rotate_cost(t_rotate *rotate)
{
	if (rotate->n_ra == 0 || rotate->n_rb == 0) // no combinaison rotation
	{
		rotate->n_rr = 0;
		return ;
	}
	else if (rotate->n_ra < rotate->n_rb) // stack require fewer rotate than stack b
	{
		rotate->n_rr = rotate->n_ra; // ra + rr silmul rotate
		rotate->n_ra = 0; // stack->a : is done
		rotate->n_rb = rotate->n_rb - rotate->n_rr; // last rotatate
	}
	else if (rotate->n_ra > rotate->n_rb)
	{
		rotate->n_rr = rotate->n_rb;
		rotate->n_rb = 0;
		rotate->n_ra = rotate->n_ra - rotate->n_rr;
	}
	else
	{
		rotate->n_rr = rotate->n_ra; // all rotate simul
		rotate->n_ra = 0;
		rotate->n_rb = 0;
	}
}

void	rev_rotate_cost(t_rev_rotate *rev_rotate)
{
	if (rev_rotate->n_rra == 0 || rev_rotate->n_rrb == 0)
	{
		rev_rotate->n_rrr = 0;
		return ;
	}
	else if (rev_rotate->n_rra < rev_rotate->n_rrb)
	{
		rev_rotate->n_rrr = rev_rotate->n_rra;
		rev_rotate->n_rra = 0;
		rev_rotate->n_rrb = rev_rotate->n_rrb - rev_rotate->n_rrr;
	}
	else if (rev_rotate->n_rra > rev_rotate->n_rrb)
	{
		rev_rotate->n_rrr = rev_rotate->n_rrb;
		rev_rotate->n_rrb = 0;
		rev_rotate->n_rra = rev_rotate->n_rra - rev_rotate->n_rrr;
	}
	else
	{
		rev_rotate->n_rrr = rev_rotate->n_rra;
		rev_rotate->n_rra = 0;
		rev_rotate->n_rrb = 0;
	}
}
