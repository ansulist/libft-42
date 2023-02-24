/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:55:20 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/07 16:55:22 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(const unsigned char *)(s1 + i)
			!= *(const unsigned char *)(s2 + i))
			return (*(const unsigned char *)(s1 + i)
			- *(const unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
/*
int main (void)
{
    printf ("%d", ft_memcmp("hello", "hella", 5));
}
*/
