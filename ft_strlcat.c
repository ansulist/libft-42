/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:15:45 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/19 18:18:34 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	end;

	if (!dest && !dstsize)
		return (ft_strlen(src));
	end = ft_strlen(dest);
	if (dstsize <= end)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < dstsize - end - 1)
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (ft_strlen(src) + end);
}
// #include <stdio.h>
// int main()
// {
// 	char src[] = "lorem ipsum dolor sit amet";
// 	char dest[2];
// 	printf("Dest Before: %s\n", dest);
// 	printf("Dest after : %zu\n", ft_strlcat(0, src, 0));
// 	printf("Dest after : %s\n", dest);
// 	printf("real : %zu\n", strlcat(0, src, 0));
// 	return (0);
// }