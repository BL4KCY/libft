/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:07:51 by melfersi          #+#    #+#             */
/*   Updated: 2023/10/04 23:07:51 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (lst[0] != NULL)
	{
		ft_lstdelone(lst[0], del);
		lst[0] - lst[0]->next;
	}
}
