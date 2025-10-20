/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:06 by theo              #+#    #+#             */
/*   Updated: 2025/08/12 15:11:52 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

/*
int	main(void)
{
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit('A'));
	write (1, "\n", 1);
	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit('2'));
	printf("%d\n", isdigit('A'));
}
*/