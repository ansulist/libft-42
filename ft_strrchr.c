/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:16:43 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 14:13:37 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	ret = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			ret = (char *)s + i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (ret);
}

// jadi kompare dari paling belakang termasuk \0