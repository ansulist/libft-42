/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:16:50 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 14:13:49 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fake_strchr(const char *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}	

char	*ft_strtrim(char const *s1, char const *set)
{
	int	first;
	int	last;

	if (s1 == NULL || set == NULL)
		return (NULL);
	first = 0;
	while (s1[first] && fake_strchr(set, s1[first]))
	{
		first++;
	}
	last = ft_strlen(s1);
	while (last >= 0 && last != first && fake_strchr(set, s1[last - 1]))
	{
		last--;
	}
	return (ft_substr(s1, first, last - first));
}

// fungsi ini digunakan untuk memangkas string
// caranya dicari dari depan dan pangkas yang di depan
// setelah itu pangkas yg di belakang
