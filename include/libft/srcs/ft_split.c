/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:50 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 15:19:46 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

int	len_word(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char charset)
{
	char	**split;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	split = malloc(sizeof(char *) * (count_word(s, charset) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] != charset)
		{
			split[j] = malloc(sizeof(char) * (len_word(&s[i], charset) + 1));
			if (!split[j])
				return (NULL);
			ft_strlcpy(split[j], &s[i], charset);
			j++;
			i = i + len_word(&s[i], charset);
		}
		else
			i++; // by pass sep
	}
	split[j] = NULL;
	return (split);
}

/*
int main(void)
{
    char *s = "  salut,,sykas,theo  ";
    char charset = ',';
    char **res = ft_split(s, charset);

    for (int i = 0; res[i]; i++)
        printf("[%s]\n", res[i]);

    // libération mémoire
    for (int i = 0; res[i]; i++)
        free(res[i]);
    free(res);
}
*/