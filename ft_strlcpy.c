/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:08:32 by melfersi          #+#    #+#             */
/*   Updated: 2023/09/27 23:08:32 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*p_src;

	p_src = (char *)src;
	while (*p_src && size > 1)
	{
		*dst = *p_src;
		dst++;
		p_src++;
		size--;
	}
	if (size)
		*dst = '\0';
	return (ft_strlen(src));
}
