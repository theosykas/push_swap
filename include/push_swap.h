/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:52:19 by theo              #+#    #+#             */
/*   Updated: 2025/10/11 22:00:55 by theo             ###   ########.fr       */
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

/*
struct_s_node
link les node si node 1 = 3 je pointe donc sur le prochain 7 jusqu'a null
garde en memoire l'adresse du prochaine element (struct s_node *next) en pointant sur la prochaine
*/

/*
	{3 , 7, 8, 9}
	value 3 -> next ==  value 7 -> next == value 9 -> next == NULL
*/

typedef struct s_node
{
	long	value;
	struct s_node *prev;
	struct s_node *next;
}	t_node;

// a (t_node *) == {[3 | next] -> [7 | next] .. NULL}

typedef struct s_stack
{
	t_node	*a;
	t_node *b;
}	t_stack;


/*main.c*/
int		main(int ac, char **av);
int		check_args(int ac, char **av);

/*algo.c*/

/*init.c*/
t_node	*new_node(int value);
t_stack *stack_init(void);
void	ft_add_back(t_node **node, t_node *new_n);
t_node	*ft_lstlast(t_node *lst);

/*utils.c*/
long	ft_atol(char *s);
int		has_duplicated(int ac, char **av);
int		is_sorted_a(t_stack *stack);

/*-------------------------------------------OPERATIONS------------------------------------------------------*/

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


//is_sorted() verifie si la pile est belle est bien trier 

/*
	2 stacks a, b 

	start = a : int positif, neg 
	b = empty
	
	"<" -> ">"

	op : 

	sa (swap a): Swap the first 2 elements at the top of stack a.
		Do nothing if there is only one element or none.
	sb (swap b): Swap the first 2 elements at the top of stack b.
		Do nothing if there is only one element or none.
	ss : sa and sb at the same time.
	pa (push a): Take the first element at the top of b and put it at the top of a.
		Do nothing if b is empty.
	pb (push b): Take the first element at the top of a and put it at the top of b.
		Do nothing if a is empty.
	ra (rotate a): Shift up all elements of stack a by 1.
		The first element becomes the last one.
	rb (rotate b): Shift up all elements of stack b by 1.
		The first element becomes the last one.
	rr : ra and rb at the same time.
	rra (reverse rotate a): Shift down all elements of stack a by 1.
		The last element becomes the first one.
	rrb (reverse rotate b): Shift down all elements of stack b by 1.
		The last element becomes the first one.
	rrr : rra and rrb at the same time.
*/