/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:29:55 by theo              #+#    #+#             */
/*   Updated: 2025/06/16 20:23:15 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>  /*for limits int*/ 
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

/*global variables*/
typedef struct s_node
{
	int				value; //valeur a trier
	int				*current;
	int				*checker;
	struct s_node	*next; // element suivant dans la pile
}	t_node;

/*for stack A & B*/
typedef struct s_stack
{
	t_node	*a;
	t_node	*b;
	int		size_a;
	int		size_b;
	void	*next;
}	t_stack;

/*--------operations--------------*/

/*swap.c*/
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
static	void	swap_stack(t_stack *stack);

/*rotate.c*/
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

/*rev_rotate.c*/
static int	rev_rotate(t_node **stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

/*push.c*/
static	int	push_swap(t_node **stack);
int	pa(t_stack *stack);
int	pb(t_stack *stack);

/*-----------------------------------*/

/*----------check_procces-------------*/

/*check_error.c*/
void	exit_and_free(t_node *node, t_stack *stack);
int		free_stack(t_stack *stack);
void	free_node(t_node *node);

/*check_arg.c*/
int		is_digit_or_sign(char c);
int		input_valid_numeric(char *str);
int		has_duplicates(t_node *stack);

/*limits_int.c*/
int		is_limit_int(char *str);
long	atol_long_int(const char *str);

/*---------------------------------------*/

/*-------------init_and_main-------------*/

/*init.c*/
t_node	*create_node(int value);
void	init_stack(t_stack *stack);
int		add_node(t_node **stack, t_node *new_element); // double ** == modifif
int		is_sorted_a(t_node *stack);

/*main.c*/
int		main(int ac, char **av);

/*---------------------------------------*/
#endif

/*atoi maybe good*/
/*pile a et pile b*/
/*t_swap *swap*/
