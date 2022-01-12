/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asulisti <asulisti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:19:30 by asulisti          #+#    #+#             */
/*   Updated: 2021/12/29 16:46:44 by asulisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	unsigned int	i;
	char			*newstring;

	newstring = malloc(sizeof(char) * (len + 1));
	if (newstring == 0)
		return (0);
	i = start;
	while (s[i] != '\0' && len > 0)
	{
		newstring[i - start] = s[i];
		i++;
		len--;
	}
	newstring[i - start] = '\0';
	return (newstring);
}
/*
int main (void)
{
    char str[] = "anita";
    char *newstring;
    newstring = ft_substr(str, 2, 2);
    printf ("%s", newstring);
}
*/
