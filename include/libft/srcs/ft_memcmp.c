/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:21 by theo              #+#    #+#             */
/*   Updated: 2025/08/14 14:45:41 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	if (!s1 || !s2)
		return (0);
	i = 0;
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (i < n)
	{
		if (dst[i] != src[i])
			return ((unsigned char)dst[i] - (unsigned char)src[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char s1[] = "";
	char s2[] = "";
	char s3[] = "";

	printf("ft_memcmp (s1, s3, 7) : %d\n", ft_memcmp(s1, s3, 0));
	printf("memcmp    (s1, s3, 7) : %d\n\n", memcmp(s1, s3, 0));

	printf("ft_memcmp (s1, s2, 8) : %d\n", ft_memcmp(s1, s2, 8));
	printf("memcmp    (s1, s2, 8) : %d\n\n", memcmp(s1, s2, 8));

	printf("ft_memcmp (s1, s2, 3) : %d\n", ft_memcmp(s1, s2, 3));
	printf("memcmp    (s1, s2, 3) : %d\n", memcmp(s1, s2, 3));
	return 0;
}
*/