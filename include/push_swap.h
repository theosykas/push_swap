/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:29:55 by theo              #+#    #+#             */
/*   Updated: 2025/06/15 16:40:53 by theo             ###   ########.fr       */
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

/*utils.c*/

/*check_arg.c*/
int		is_digit_or_sign(char c);
int		input_valid_numeric(char *str);
int		has_duplicates(t_node *stack);

/*main*/
int		main(int ac, char **av);

/*swap.c*/
int	sa(t_stack *stack);
int	sb(t_stack *stack);
int	ss(t_stack *stack);
static	void	swap_stack(t_stack *stack);

/*rotate.c*/
int	ra(t_stack *stack);
int	rb(t_stack *stack);
int	rr(t_stack *stack);

/*rev_rotate.c*/
int	rra(t_stack *stack);
int	rrb(t_stack *stack);
int	rrr(t_stack *stack);

/*check_error.c*/
void	exit_and_free(t_node *node, t_stack *stack);
int		free_stack(t_stack *stack);
void	free_node(t_node *node);

/*limits_int.c*/
int		is_limit_int(char *str);
long	atol_long_int(const char *str);

/*push.c*/
int	pa(t_stack *stack);
int	pb(t_stack *stack);
static	int	push_swap(t_node **stack);

/*init.c*/
t_node	*create_node(int value);
void	init_stack(t_stack *stack);
int		add_node(t_node **stack, t_node *new_element); // double ** == modifif
int		is_sorted_a(t_node *stack);

#endif

/*atoi maybe good*/
/*pile a et pile b*/
/*t_swap *swap*/
