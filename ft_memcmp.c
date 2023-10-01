/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:53:42 by melfersi          #+#    #+#             */
/*   Updated: 2023/09/28 12:53:42 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	while (n > 0)
	{
		if (*s1_ptr != *s2_ptr)
		{
			if (*s1_ptr > *s2_ptr)
				return (1);
			else
				return (-1);
		}
		n--;
		s1_ptr++;
		s2_ptr++;
	}
	return (0);
}
