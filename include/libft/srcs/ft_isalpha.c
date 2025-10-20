/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:00 by theo              #+#    #+#             */
/*   Updated: 2025/08/12 15:11:08 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (true);
	return (false);
}

/*
int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('@'));
	printf("%d\n", ft_isalpha('0'));
	write (1, "\n", 1);
	printf("%d\n", isalpha('A'));
	printf("%d\n", isalpha('@'));
	printf("%d\n", isalpha('0'));
}
*/