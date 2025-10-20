/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:52:19 by theo              #+#    #+#             */
/*   Updated: 2025/10/20 17:45:51 by theo             ###   ########.fr       */
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
	int	top;
	int	bottom;
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
t_node	*move_to_stack(t_content *content, t_stack *stack);
void	exec_move(t_content *content,t_stack *stack, t_node *gnode);
void	exec_move_back(t_content *content, t_stack *stack, t_node *gnode);
//void	move_gnode_to_top(t_content *content, t_stack *stack, t_node *gnode);
void	move_gnode_to_top(t_content *content, t_stack *stack, t_node *gnode);
void	move_gnode_b(t_content *content, t_stack *stack, t_node *gnode);
t_node	*find_gnode(t_content *content, t_node *head);

void	sort_content(t_content *content, t_stack *stack, int stack_a);

void	algo_exec(t_content *content, t_stack *stack);

/*calculate_cost*/
int	calculate_cost(t_content *content);
void	rotate_cost(t_rotate *rotate);
void	rev_rotate_cost(t_rev_rotate *rev_rotate);

//fill
void	fill_content(t_content *content,t_node *head, int value);
void	update_rotation(t_content *content, int is_a);

/*content_rev*/
void	content_rev_rotate_b(t_content *content, t_stack *stack);
void	content_rev_rotate_a(t_content *content,t_stack *stack);
void	content_rotate_a(t_content *content,t_stack *stack);
void	content_rotate_b(t_content *content, t_stack *stack);

	/*get_value.c*/
int		get_stack_pos(t_node *head,t_content *content, int value);
t_node	*get_min(t_node *head);
t_node	*get_max(t_node *head);
int		stack_size(t_node *head);

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
int	move_up(t_node *head, int current);
int	move_down(t_node *head, int current);

/*-----NODE_AND_STACK---------*/

	/*node_utils.c*/
t_node	*gnode_index(t_node *head, int value);
	/*init.c*/
t_node	*new_node(int value);
t_stack *stack_init(void);
t_content	*content_init(int pos, int top, int bottom);

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
