/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:33:58 by melfersi          #+#    #+#             */
/*   Updated: 2023/09/28 22:33:58 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s);
	ptr = ft_calloc(sizeof(char), size);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, size);
	return (ptr);
}
