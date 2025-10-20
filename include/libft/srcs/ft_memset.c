/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:31 by theo              #+#    #+#             */
/*   Updated: 2025/08/13 15:16:24 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	if (!b)
		return (NULL);
	i = 0;
	s = b;
	while (len > i)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char str1[50] = "Bonjour tout le monde";
	char str2[50] = "Bonjour tout le monde";

	ft_memset(str1 + 8, -5, 4);
	printf("ft_memset : %s\n", str1);
	memset(str2 + 8, -5, 4);
	printf("memset    : %s\n", str2);
	return 0;
}
*/