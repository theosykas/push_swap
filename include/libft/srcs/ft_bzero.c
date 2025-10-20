/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:34:46 by theo              #+#    #+#             */
/*   Updated: 2025/08/13 15:31:47 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *s_cast;

	if (n == 0)
		return ;
	i = 0;
	s_cast = s;
	while (n > i)
	{
		s_cast[i] = 0;
		i++;
	}
}

/*
int	main(void)
{
	unsigned char buf1[10] = {1,2,3,4,5,6,7,8,9,10};
	unsigned char buf2[10] = {1,2,3,4,5,6,7,8,9,10};

    // Test avec ft_bzero
	ft_bzero(buf1 + 3, 4);
    printf("ft_bzero : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", buf1[i]);
    printf("\n");

    // Test avec bzero
    bzero(buf2 + 3, 4);
    printf("bzero    : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", buf2[i]);
    printf("\n");

    return 0;
}
*/