/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:17:28 by theo              #+#    #+#             */
/*   Updated: 2025/10/15 12:13:27 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		is_sorted_a(t_stack *stack)
{
	t_node	*current;

	current = stack->a;
	if (!current)
		return (true);
	while (current->next)
	{
		if (current->value > current->next->value)
			return (false);
		current = current->next;
	}
	return (true);
}

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
