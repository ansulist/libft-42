/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anita <anita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:08:12 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/12 21:48:27 by anita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*string;
	size_t		i;

	i = 0;
	string = (const char *)s;
	while (i < n)
	{
		if (string[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
