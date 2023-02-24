/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:16:30 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 14:20:28 by ansulist         ###   ########.fr       */
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
	if (n == 0)
		return (NULL);
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

// fungsi ini digunakan untuk mencari string dalam string
// dan mengembalikan jika stringnya di 
// temukan sampai dengan akhir string itu sendiri
