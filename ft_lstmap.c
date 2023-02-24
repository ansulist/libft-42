/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 02:17:31 by anitasulist       #+#    #+#             */
/*   Updated: 2022/11/22 14:11:00 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*element;

	new_list = NULL;
	while (lst != NULL)
	{
		element = ft_lstnew((*f)(lst->content));
		if (element == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, element);
		lst = lst->next;
	}
	return (new_list);
}

// storing modified one in the new_list
// kalo gagal langsung delete the new list
// pertama, modify konten
// kedua pindah ke node yang baru
// ketiga lanjut ke next
// kalo gagal, masuk ke lst clear 