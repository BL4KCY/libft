/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 03:56:41 by melfersi          #+#    #+#             */
/*   Updated: 2023/09/28 03:56:41 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_ptr;

	s_ptr = (char *)s;
	while (*s)
		s++;
	while (*s_ptr != *s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
