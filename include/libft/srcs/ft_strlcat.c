/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:36:05 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 18:59:00 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize <= d_len)
		return (dstsize + s_len);
	while (src[i] && d_len + i < (dstsize - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}


/*
int	main(void)
{
	char src[] = "Bonjour";
	char dest[10];
	size_t len = ft_strlcat(dest, src, sizeof(dest));
	printf("ft_strlcpy dest: \"%s\", return: %zu\n", dest, len);
	char dest2[10];
	size_t len2 = strlcat(dest2, src, sizeof(dest2));
	printf("strlcpy dest: \"%s\", return: %zu\n", dest2, len2);
	return 0;
}
*/