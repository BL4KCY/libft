/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:33:59 by melfersi          #+#    #+#             */
/*   Updated: 2023/09/27 16:33:59 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;
	size_t	i;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	while (src_ptr[i] != c && i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	if (src_ptr[i] == c)
	{
		dest_ptr[i] = src_ptr[i];
		return (&dest_ptr[i + 1]);
	}
	else
		return (NULL);
}
