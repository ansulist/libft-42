/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asulisti <asulisti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:18:50 by asulisti          #+#    #+#             */
/*   Updated: 2021/12/29 16:46:34 by asulisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = ft_strlen(s);
	while (s[(lenght--) - 1])
	{
		if (s[lenght - i] == (char)c)
			return ((char *)s + (lenght - i));
		i++;
	}
	if (s[lenght - i] == (char)c)
		return ((char *)s + (lenght - i));
	return (0);
}
/*
int main    (void)
{
    char s[] = "aku adalah anak gembala";
    char c = 'k';
    printf("%s", ft_strrchr(s, c));
}
*/
