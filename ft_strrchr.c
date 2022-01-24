/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anitasulistiyawati <anitasulistiyawati@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:18:50 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/20 21:19:59 by anitasulist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = ft_strlen(s);
	while (i <= lenght)
	{
		if (s[lenght - i] == (char)c)
			return ((char *)s + (lenght - i));
		i++;
	}
	return (0);
}
/*
// jadi kompare dari paling belakang termasuk \0
int main    (void)
{
    char s[] = "aku adalah anak gembala";
    char c = 'k';
    printf("%s", ft_strrchr(s, c));
}
*/
