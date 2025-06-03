/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:29:55 by theo              #+#    #+#             */
/*   Updated: 2025/06/03 15:53:09 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# define INT_MIN -2147483648
//# define INT_MAX 2147483647

# include "libft/libft.h"
# include <limits.h> // pour int min et max 
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

//pour contenir les infos globals
typedef struct	s_node
{
	int				value; //valeur a trier
	struct s_node	*next; // element suivant dans la pile
}	t_node;

// pour gerer pile a et b
typedef struct	s_stack
{
	t_node	*a;
	t_node	*b;
	int		size_a;
	int		size_b;
}	t_stack;

typedef struct push_swap
{
	
}	;


/*utils.c*/
void	free_stack(t_stack *stack);
void	check_arg(t_stack *stack, t_node *node);

/*check_arg.c*/
int	is_digit_or_sign(char c);
int	is_valid_num(char *str);

/*main*/
int	main(int ac, char **av);

/*swap.c*/
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

/*rotate.c*/
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

/*rev_rotate.c*/
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

/*check_error.c*/
void	free_exit(t_stack *stack);
void	exit_and_free(t_node **node, t_stack **stack);

/*push.c*/
void	pa(t_stack *stack);
void	pb(t_stack *stack);

/*init.c*/
t_node	*create_node(int value);
void	init_stack(t_stack *stack);
int		add_node(t_node **stack, t_node *new_element); // double ** == modifif

#endif

/*atoi maybe good*/
/*pile a et pile b*/
/*t_swap *swap*/

/*sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.
sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
Ne fait rien s’il n’y en a qu’un ou aucun.
ss : sa et sb en même temps.
pa (push a) : Prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide.
pb (push b) : Prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide.
ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier.
rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
Le premier élément devient le dernier.
rr : ra et rb en même temps.
rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.
rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
la pile b . le dernier element devient le premier.
rrr : rra et rrb at the same time*/

/*malloc, read, free exit*/
/*trier les piles libere bien la heap aucun relink aucune var globale */