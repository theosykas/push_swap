/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:36:31 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 14:56:12 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], len);
	return (str);
}
