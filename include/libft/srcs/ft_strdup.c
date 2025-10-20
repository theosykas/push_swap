/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:57 by theo              #+#    #+#             */
/*   Updated: 2025/08/17 18:44:03 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

char	*ft_stpcpy(char * dst, const char * src)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	size_t			i;
	char			*dup;

	if (!s1)
		return (NULL);
	dup = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ft_stpcpy(dup, s1);
		i++;
	}
	return (dup);
}

/*
int	main(void)
{
	 char *src = "theo";

    char *dup1 = strdup(src);     // vraie fonction
    char *dup2 = ft_strdup(src);  // ta fonction

    printf("Original : %s\n", src);
    printf("strdup   : %s\n", dup1);
    printf("ft_strdup: %s\n", dup2);

	free(dup1);
	free(dup2);

	return 0;
}
*/