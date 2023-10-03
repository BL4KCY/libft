/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:39:01 by melfersi          #+#    #+#             */
/*   Updated: 2023/10/03 02:39:01 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strout;
	size_t	len;
	size_t	index;

	len = ft_strlen(s);
	strout = (char *)malloc(sizeof(char) * (len + 1));
	if (strout == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		strout[index] = f(index, s[index]);
		index++;
	}
	strout[index] = 0;
	return (strout);
}
