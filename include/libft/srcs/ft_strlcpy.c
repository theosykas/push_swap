/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:36:09 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 18:25:55 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char src[] = "Bonjour";
	char dest[10];
	size_t len = ft_strlcpy(dest, src, sizeof(dest));
	printf("ft_strlcpy dest: \"%s\", return: %zu\n", dest, len);
	char dest2[10];
	size_t len2 = strlcpy(dest2, src, sizeof(dest2));
	printf("strlcpy dest: \"%s\", return: %zu\n", dest2, len2);

	return 0;
}
*/