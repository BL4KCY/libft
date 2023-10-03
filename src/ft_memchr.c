/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 04:30:17 by melfersi          #+#    #+#             */
/*   Updated: 2023/09/28 04:30:17 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_ptr;

	i = 0;
	s_ptr = (char *)s;
	while (i < n)
	{
		if (s_ptr[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
