/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anitasulistiyawati <anitasulistiyawati@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:13:56 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/23 19:37:30 by anitasulist      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strndup(const char *src, int n)
{
	int i;
	char *str;

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

char	*next_word(const char *s, char c) {
	int i;
	char *ret;

	i = 0;
	ret = (char *)s;
	while (s[i] != '\0') {
		if (s[i] != c)
			return ret;
		ret = (char *)s + i + 1;
		i++;
	}
	return ret;
}

int	wordlen(char *s, char c) {
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c) {
		i++;
	}
	return (i);
}

int	count_words(char const *s, char c)
{
	int i;
	int nb_word;
	char *nextword;

	i = 0;
	nb_word = 0;
	nextword = next_word(s, c);
	while (nextword != NULL && nextword[0] != '\0')
	{
		nb_word++;
		nextword = next_word(nextword + wordlen(nextword, c), c);
	}
	return (nb_word);
}

char	**ft_split(char const *s, char c)
{
	char **words;
	char *nextword;
	int nbwords;
	int i;

	i = 0;
	nbwords = count_words(s, c);
	words = malloc(sizeof(char *) * (nbwords + 1));
	if (words == NULL)
		return (NULL);
	nextword = next_word(s, c);
	while (nextword != NULL && nextword[0] != '\0')
	{
		words[i] = ft_strndup(nextword,	wordlen(nextword, c));
		i++;
		nextword = next_word(nextword + wordlen(nextword, c), c);
	}
	words[i] = 0;
	return (words);
}
/*
int main ()
{
    char    **words = ft_split("   tripouille42", ' ');

    int i = 0;
    while (words[i] != 0){
        printf("word %d: %s\n", i+1, words[i]);
        i++;
    }
}
*/
