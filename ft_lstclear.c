/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:53:29 by anitasulist       #+#    #+#             */
/*   Updated: 2022/11/22 14:10:08 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*link_saver;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		link_saver = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = link_saver;
	}
}

// fungsi ini berguna untuk menghapus seluruh konten node
// dan node itu sendiri yang ada dalam link
// the func that delete the content
// replaced by 'd' to proof that it is deleted