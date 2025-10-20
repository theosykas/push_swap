/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:36:25 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 18:16:23 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	tmp = (char *)s;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (tmp + i);
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char str[] = "banane";

	// Test avec ft_strchr
	char *res1 = ft_strrchr(str, 'a');
	if (res1)
		printf("ft_strchr : %s\n", res1);
	else
		printf("ft_strchr : Caractère non trouvé\n");

	char *res2 = strrchr(str, 'a');
	if (res2)
        printf("strchr    : %s\n", res2);
    else
        printf("strchr    : Caractère non trouvé\n");

    return 0;
}
*/