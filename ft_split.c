/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:15:00 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 13:54:37 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*next_word(const char *s, char c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			return (ret);
		ret = (char *)s + i + 1;
		i++;
	}
	return (ret);
}

int	wordlen(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

int	count_words(char const *s, char c)
{
	int		i;
	int		nb_word;
	char	*nextword;

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

char	**free_words(char **words, int len)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		free(words[i]);
		i--;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	*nextword;
	int		nbwords;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	nbwords = count_words(s, c);
	words = malloc(sizeof(char *) * (nbwords + 1));
	if (words == NULL)
		return (NULL);
	nextword = next_word(s, c);
	while (nextword != NULL && nextword[0] != '\0')
	{
		words[i] = ft_substr(nextword, 0, wordlen(nextword, c));
		if (words[i] == NULL)
			return (free_words(words, i));
		i++;
		nextword = next_word(nextword + wordlen(nextword, c), c);
	}
	words[i] = 0;
	return (words);
}

// the free words digunakan untuk melepas memori
// kalo kata sebelumnya gagal di proses
// int main ()
// {
// 	char c;
// 	c = 'i';
//     char    **words = ft_split("lorem ipsum dolor sit amet, 
// 	consesim sit amet, adipiscing nec, 
// 	ultricies sed, dolor. Cras elementum ultricies diam. 
// 	Maecenas ligula massa, varius a, semper congue, euismod non, mi.", c);

//     int i;
// 	i = 0;
//     while (words[i] != 0){
//         printf("word %d: %s\n", i + 1, words[i]);
//         i++;
//     }
// }