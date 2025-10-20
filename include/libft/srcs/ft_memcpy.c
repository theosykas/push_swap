/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:24 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 18:19:31 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_d;
	unsigned char	*src_s;
	
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	i = 0;
	src_s = (unsigned char *)src;
	dst_d = (unsigned char *)dst;
	while (i < n)
	{
		dst_d[i] = src_s[i];
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	char src[] = "Bonjour";
    char dest1[20] = "XXXXXXXXXXXX";
    char dest2[20] = "XXXXXXXXXXXX";

    // Test avec ft_memcpy
    ft_memcpy(dest1, src, 0); // copie "Bonjour" + '\0'
    printf("ft_memcpy : %s\n", dest1);

    // Test avec memcpy
    memcpy(dest2, src, 0);
    printf("memcpy    : %s\n", dest2);

    return 0;
}
*/