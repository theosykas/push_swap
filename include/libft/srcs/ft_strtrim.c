/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:36:28 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 15:38:03 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	is_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && !is_sep(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (s1[end] && !is_sep(set, s1[end]))
		end--;
	dst = ft_substr(s1, start, end - start);
	return (dst);
}
