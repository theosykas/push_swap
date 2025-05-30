/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:29:47 by theo              #+#    #+#             */
/*   Updated: 2025/05/30 19:12:32 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	char	*swap;
	if (ac == 1)
		exit(1);
	swap = ft_calloc(sizeof());
	if (!swap)
		return (1);
	if (!ac && !swap)
	{
		ft_putstr_fd("ERROR", 2);
	}
	return (0);
}

/*instruc followed by '\n', int type, if the prog
make an error we write 'ERROR' (stderr(2))'\n', */
