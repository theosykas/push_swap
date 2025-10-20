/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:34:54 by theo              #+#    #+#             */
/*   Updated: 2025/08/16 17:31:29 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		j;
	size_t	len;

	if (!s2 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	j = 0;
	while (s2[j])
	{
		s1[len] = s2[j];
		len++;
		j++;
	}
	s1[len] = '\0';
	return (s1);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = malloc(sizeof(char) * ft_strlen(s1) + 1 + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	ft_strcat(join, s1);
	ft_strcat(join, s2);
	return (join);
}

/*
int	main(void)
{
	 char *s1 = "Hello";
    char *s2 = " World!";
    char *res;

    res = ft_strjoin(s1, s2);
    if (!res)
        return (1);

    printf("s1      : %s\n", s1);
    printf("s2      : %s\n", s2);
    printf("ft_strjoin: %s\n", res);

    free(res); // à ne pas oublier, ft_strjoin alloue
    return (0);
}
*/

/*  char dest1[50] = "Hello";
    char dest2[50] = "Hello";

    char *src = " world!";

    // vraie fonction
    strcat(dest1, src);

    // ta fonction
    ft_strcat(dest2, src);

    printf("strcat   : %s\n", dest1);
    printf("ft_strcat: %s\n", dest2);

    return 0;*/