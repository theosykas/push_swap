/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:35:15 by theo              #+#    #+#             */
/*   Updated: 2025/08/24 17:39:01 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	len_digit(int n)
{
	int	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		len;

	nb = n;
	len = len_digit(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

/*
int	main(void)
{
	 int numbers[] = {0, 8, -42, 12345, -12345, 2147483647, -2147483648};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    char *res;
    
    for (int i = 0; i < size; i++)
    {
        res = ft_itoa(numbers[i]);
        if (res)
        {
            printf("ft_itoa(%d) = %s\n", numbers[i], res);
            free(res); // important, sinon fuite mémoire
        }
        else
            printf("ft_itoa(%d) = NULL\n", numbers[i]);
    }
    return 0;
}

int main(void)
{
    printf("%d\n", len_digit(0));
}
*/