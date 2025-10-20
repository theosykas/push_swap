/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:34:57 by theo              #+#    #+#             */
/*   Updated: 2025/08/12 15:11:39 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (true);
	return (false);
}

/*
int	main(void)
{
	printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('5'));
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('@'));
    printf("%d\n", ft_isalnum(' '));

	putchar('\n');
    printf("%d\n", isalnum('A'));
    printf("%d\n", isalnum('5'));
    printf("%d\n", isalnum('a'));
    printf("%d\n", isalnum('@'));
    printf("%d\n", isalnum(' '));

    return 0;
}
*/