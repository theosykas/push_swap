/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:18 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 18:09:12 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *	ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*s1;

	if (!s)
		return (NULL);
	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char s[] = "Bonjour";

    // Test 1 : caractère présent
    char *res1 = ft_memchr(s, 'j', 7);
    char *res2 = memchr(s, 'j', 7);
    printf("ft_memchr : %s\n", res1 ? res1 : "NULL");
    printf("memchr    : %s\n\n", res2 ? res2 : "NULL");

    // Test 2 : caractère absent
    res1 = ft_memchr(s, 'x', 7);
    res2 = memchr(s, 'x', 7);
    printf("ft_memchr : %s\n", res1 ? res1 : "NULL");
    printf("memchr    : %s\n\n", res2 ? res2 : "NULL");

    // Test 3 : recherche limitée à une partie de la chaîne
    res1 = ft_memchr(s, 'o', 2); // devrait s'arrêter avant le premier 'o'
    res2 = memchr(s, 'o', 2);
    printf("ft_memchr : %s\n", res1 ? res1 : "NULL");
    printf("memchr    : %s\n", res2 ? res2 : "NULL");

    return 0;
}
*/