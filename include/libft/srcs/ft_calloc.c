/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:34:51 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 19:15:31 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;

	tab = malloc(count * size); 
	if (!tab)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}

/*
int	main(void)
{
	  int *arr1 = ft_calloc(5, sizeof(int));
    int *arr2 = calloc(5, sizeof(int));

    if (!arr1 || !arr2)
    {
        printf("Erreur d'allocation\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    printf("ft_calloc : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    printf("calloc    : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    free(arr1);
    free(arr2);

    return 0;
}
*/