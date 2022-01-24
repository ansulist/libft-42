/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anitasulistiyawati <anitasulistiyawati@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:11:11 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/21 13:06:27 by anitasulist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t end;

	end = ft_strlen(dest);
	if (size <= end)
		return (size + ft_strlen(src));

	i = 0;
	while (src[i] != '\0' && i < size - end - 1)
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (ft_strlen(src) + end);
}
