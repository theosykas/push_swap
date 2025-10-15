/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:52:19 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 16:46:06 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"

#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct s_node
{
	int	value;
	struct s_node *prev;
	struct s_node *next;
}	t_node;

// a (t_node *) == {[3 | next] -> [7 | next] .. NULL}

typedef struct s_stack
{
	t_node	*a;
	t_node *b;
}	t_stack;

//0 scenarios conflit
typedef struct s_content
{
	int	pos;
	int	n_rr;
	int	n_ra;
	int	n_rb;
	int	n_rrr;
	int	n_rra;
	int	n_rrb;
	int	total_cost;
}	t_content;

typedef struct s_rotate
{
	int	n_rr;
	int	n_ra;
	int	n_rb;
	int	total_rotate;
}	t_rotate;

typedef struct s_rev_rotate
{
	int	n_rrr;
	int	n_rra;
	int	n_rrb;
	int	total_rev_rotate;
}	t_rev_rotate;


	/*main.c*/
int		main(int ac, char **av);
int		check_args(int ac, char **av);
void	free_stack(t_stack *stack);

/*algo.c*/


/*content_rev*/
void	content_rev_rotate(t_content *content,t_stack *stack);
void	content_rotate(t_content *content,t_stack *stack);

	/*get_value.c*/
int	get_stack_pos(t_node *head,t_content *content, int value);
t_node	*get_min(t_node *head);
t_node	*get_max(t_node *head);

	/*utils.c*/
int		is_sorted_a(t_stack *stack);
void	ft_add_back(t_node **node, t_node *new_n);
t_node	*ft_lstlast(t_node *lst);

/*----------------PARSING_INPUT------------------*/

	/*check_arg*/
long	ft_atol(char *s);
int		has_duplicated(int ac, char **av);
	/*utils.c*/
int		is_sorted_a(t_stack *stack);
void	ft_add_back(t_node **node, t_node *new_n);
t_node	*ft_lstlast(t_node *lst);


/*-----------------------------CALCULATE---------------------------------*/
	/*cost_init*/
void	rotate_content(t_content *content, t_rotate *res, int pos);
void	rev_rotate_content(t_content *content, t_rev_rotate *res, int pos);

	/*move.c*/
int	move_up(t_stack *stack, int current);
int	move_down(t_stack *stack, int current);


/*-----NODE_AND_STACK---------*/

	/*node_utils.c*/
t_node	*gnode_index(t_stack *stack, int value);
	/*init.c*/
t_node	*new_node(int value);
t_stack *stack_init(void);
t_content	*content_init(int pos);

/*---------OPERATIONS-------------------*/

//swap.c
int		swap(t_node *head);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_ss(t_stack *stack);

//push
int		push(t_node **dst, t_node **src);
void	push_a(t_stack *stack);
void	push_b(t_stack *stack);
void	push_pp(t_stack *stack);

//rotate
int		rotate(t_node **head);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);


//rev_totate
int		rev_rotate(t_node **lst);
void	rev_rotate_a(t_stack *stack);
void	rev_rotate_b(t_stack *stack);
void	rev_rotate_ab(t_stack *stack);

#endif


/*
struct_s_node
link les node si node 1 = 3 je pointe donc sur le prochain 7 jusqu'a null
garde en memoire l'adresse du prochaine element (struct s_node *next) en pointant sur la prochaine
*/

/*
	{3 , 7, 8, 9}
	value 3 -> next ==  value 7 -> next == value 9 -> next == NULL
*/
