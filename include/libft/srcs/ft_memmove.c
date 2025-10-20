/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:27 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 17:36:02 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dst);
}

/*
int	main(void)
{
	
	 char str1[20] = "Hello World!";
    char str2[20] = "Hello World!";

    // Test 1 : copie simple (pas de chevauchement)
    printf("Avant (test 1): str1 = %s\n", str1);
    ft_memmove(str1 + 6, str1, 5); // déplace "Hello" dans str1+6
    printf("Après  ft_memmove: %s\n", str1);

    printf("Avant (test 1): str2 = %s\n", str2);
    memmove(str2 + 6, str2, 5);
    printf("Après   memmove : %s\n\n", str2);

    // Test 2 : chevauchement vers la gauche
    char str3[20] = "ABCDEFGHIJ";
    char str4[20] = "ABCDEFGHIJ";

    printf("Avant (test 2): str3 = %s\n", str3);
    ft_memmove(str3, str3 + 2, 5); // déplace "CDEFG" au début
    printf("Après  ft_memmove: %s\n", str3);

    printf("Avant (test 2): str4 = %s\n", str4);
    memmove(str4, str4 + 2, 5);
    printf("Après   memmove : %s\n", str4);

    return 0;
}
*/