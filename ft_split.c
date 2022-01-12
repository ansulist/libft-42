/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anita <anita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:13:56 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/07 16:57:39 by anita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, int n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == 0)
		return (0);
	while (src[i] != '\0' && i < n)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	count_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (s != 0)
	{
		i++;
		s = ft_strchr(s, c);
		if (s != 0)
		{
			s++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	*nextword;
	int		nbwords;
	int		i;

	i = 0;
	nbwords = count_words(s, c);
	words = malloc(sizeof(char *) * (nbwords + 1));
	while (s != 0)
	{
		nextword = ft_strchr(s, c);
		words[i] = ft_strndup(s, nextword - s);
		s = nextword;
		if (nextword != 0)
			s++;
		i++;
	}
	words[i] = 0;
	return (words);
}
/*
int main ()
{
    char    **words = ft_split("anita+anita+anita", '+');

    int i = 0;
    while (words[i] != 0){
        printf("word %d: %s\n", i+1, words[i]);
        i++;
    }
}
*/
