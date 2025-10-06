/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:42:46 by theo              #+#    #+#             */
/*   Updated: 2025/10/06 20:09:21 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*new_node(int value)
{
	t_node	*new_node;

	new_node = ft_calloc(1, sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

t_stack *stack_init(void)
{
	t_stack *stack_init;

	stack_init = ft_calloc(1, sizeof(t_stack));
	if (!stack_init)
		return (NULL);
	stack_init->a = NULL;
	stack_init->b = NULL;
	return (stack_init);
}


//head = start : new_node nouvau maillon 
void	ft_add_back(t_node **head, t_node *new_n)
{
	t_node *lst;

	if (!head || !new_n)
		return ;
	if (*head == NULL)
	{
		*head = new_n;
		return ;
	}
	lst = ft_lstlast(*head);
	new_n->prev = lst;
	lst->next = new_n;
}

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while(lst->next)
		lst = lst->next;
	return (lst);
}
