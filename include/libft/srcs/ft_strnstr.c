/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:36:22 by theo              #+#    #+#             */
/*   Updated: 2025/09/25 18:22:41 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <limits.h>  
//#include <xlocale.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_n;
	char	*find;

	if (!haystack || !needle)
		return (NULL);
	find = (char *)haystack;
	len_n = ft_strlen(needle); 
	if (!*needle)
		return (find);
	i = 0;
	while (haystack[i] && i + len_n <= len)
	{
		if (ft_strncmp(&haystack[i], needle, len_n) == 0)
			return (&find[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	    char *haystack = "Hello 42 Network!";
    char *needle   = "42";

    // vraie fonction
    char *res1 = strnstr(haystack, needle, 7);

    // ta fonction
    char *res2 = ft_strnstr(haystack, needle, 7);

    if (res1)
        printf("strnstr   : %s\n", res1);
    else
        printf("strnstr   : (NULL)\n");

    if (res2)
        printf("ft_strnstr: %s\n", res2);
    else
        printf("ft_strnstr: (NULL)\n");
  return 0;
}
*/