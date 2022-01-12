/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asulisti <asulisti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:34:26 by asulisti          #+#    #+#             */
/*   Updated: 2021/12/29 15:01:28 by asulisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	pointer = (void *)malloc(count * size);
	if (!pointer)
		return (0);
	ft_bzero(pointer, count);
	return (pointer);
}
/*
// calloc digunakan untuk mengalokasikan malloc dan 
// diisi sementara pake 0 biar nanti bisa di pakai
*/