/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:16:57 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 14:14:00 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_target_len(size_t s_len, unsigned int start)
{
	if (s_len < (size_t)start)
		return (0);
	return (s_len - start);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*newstring;
	size_t			target_len;

	if (s == NULL)
		return (NULL);
	target_len = get_target_len(ft_strlen(s), start);
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
// fungsi ini berguna untuk mengurangi string
// len adalah panjang dari akhir string yang diinginkan
