/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anita <anita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:11:11 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/04 20:05:37 by anita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	end;

	i = 0;
	end = ft_strlen(dest);
	if (size > ft_strlen(dest))
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[end + i] = src[i];
			i++;
		}
		dest[end + i] = '\0';
		return (ft_strlen(src) + end);
	}
	else
	{
		return (size + ft_strlen(src));
	}
}
