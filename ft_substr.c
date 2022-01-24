/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anitasulistiyawati <anitasulistiyawati@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:19:30 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/20 22:48:12 by anitasulist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, int len)
{
	unsigned int i;
	char *newstring;
	char target_len;

	target_len = ft_strlen(s) - start;
	if (target_len < 0)
		target_len = 0;
	if (len > target_len)
		len = target_len;
	if (len < target_len)
		target_len = len;
	newstring = malloc(sizeof(char) * target_len + 1);
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
