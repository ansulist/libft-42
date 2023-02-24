/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:15:33 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/19 15:46:37 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str_res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str_res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str_res == NULL)
		return (NULL);
	ft_memmove(str_res, s1, ft_strlen(s1));
	ft_memmove(str_res + ft_strlen(s1), s2, ft_strlen(s2));
	str_res[(ft_strlen(s1) + ft_strlen(s2))] = '\0';
	return (str_res);
}
