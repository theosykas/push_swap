/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:12:34 by theo              #+#    #+#             */
/*   Updated: 2025/06/02 16:50:07 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*crée un nouveau noeud contenant une valeur a trier,  a chaques ajout d'une valeur 
a la pile on utilise cette fonction pour le noeud correspondant*/
t_node	*create_node(int value)
{
	t_node	*new;

	t_node *new = calloc(1, sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

/*init de la taille et des piles simplement*/
void	init_stack(t_stack *stack)
{
	stack->a = NULL;
	stack->b = NULL;
	stack->size_a = 0;
	stack->size_b = 0;
}

/*ajouter un node a la fin d'une pile ou si elle est NULL l'ajouter au debut */
void	add_node(t_node **stack, t_node *new_element)
{
	t_node	*tmp;
	
	if (!new_element)
		return (EXIT_FAILURE);
	if (*stack == NULL)
	{
		*stack = new_element;
		return ;
	}
	tmp = *stack;
	while (tmp->next) // tant que le pro element existe on parcours
	{
		tmp = tmp->next;
	}
	tmp->next = new_element;
}
