/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:01:53 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 13:56:15 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	pointer = (void *)malloc(count * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, count * size);
	return (pointer);
}

// calloc digunakan untuk mengalokasikan malloc dan 
// diisi sementara pake 0 biar nanti bisa di pakai
// last condition is if the size has max_size, you suppose just
// return  NULL