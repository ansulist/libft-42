/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anitasulistiyawati <anitasulistiyawati@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:41:37 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/20 22:22:26 by anitasulist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	finding_match(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	while (needle[i] != '\0')
	{
		if (needle[i] != haystack[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (haystack[i] != '\0' && i < n)
	{
		if (i + ft_strlen(needle) > n)
			return (NULL);
		if (finding_match(haystack + i, needle) == 1)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
