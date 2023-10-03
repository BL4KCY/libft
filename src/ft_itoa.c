/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:17:19 by melfersi          #+#    #+#             */
/*   Updated: 2023/10/02 20:17:19 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_size(long n, int *sign)
{
	long	size;
	long	div;

	div = 1;
	size = 0;
	while (n / div != 0)
	{
		size++;
		div *= 10;
	}
	if (n < 0)
	{
		*sign = (-1);
		return (size + 1);
	}
	*sign = 1;
	return (size);
}

static char	*ft_init(char *str, long n, int *sign, size_t size)
{
	long	index;
	long	div;

	index = 0;
	div = 1;
	if (*sign == -1)
	{
		str[0] = '-';
		n *= (-1);
		size--;
		index++;
	}
	while (--size)
		div *= 10;
	while (div)
	{
		str[index] = (n / div) + '0';
		n %= div;
		div /= 10;
		index++;
	}
	str[index] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	size;
	int		sign;
	char	*str;

	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	size = ft_get_size(n, &sign);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	return (ft_init(str, n, &sign, size));
}
