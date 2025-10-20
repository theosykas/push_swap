/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:54 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 18:13:43 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *	ft_strchr(const char *s, int c)
{
	int	i;
	char	*tmp;

	if (!s)
		return (NULL);
	i = 0;
	tmp = (char *)s;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (tmp + i);
		i++;
	}
	if ((char)c == '\0')
		return (tmp + i);
	return (NULL);
}

/*
int	main(void)
{
	char str[] = "banane";

	// Test avec ft_strchr
	char *res1 = ft_strchr(str, 'a');
	if (res1)
		printf("ft_strchr : %s\n", res1);
	else
		printf("ft_strchr : Caractère non trouvé\n");

	char *res2 = strchr(str, 'a');
	if (res2)
        printf("strchr    : %s\n", res2);
    else
        printf("strchr    : Caractère non trouvé\n");

    return 0;
}
*/