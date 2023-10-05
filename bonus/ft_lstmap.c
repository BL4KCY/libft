/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 02:31:21 by melfersi          #+#    #+#             */
/*   Updated: 2023/10/05 02:31:21 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;

	temp = newlist;
	while (lst != NULL)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (newlist);
}
