/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:36:16 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 17:18:41 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;

	if (!s || !f)
		return (NULL);
	dst = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
char my_func(char c)
{
	int	i;

	i = 0;
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}

int main(void)
{
	char *s = "LibFt Is CoOl";
	char *res;

	res = ft_strmapi(s, my_func);
	if (!res)
	{
		printf("Erreur malloc\n");
		return (1);
	}
	printf("Avant : %s\n", s);
	printf("Après : %s\n", res);

	free(res);
	return (0);
}
*/