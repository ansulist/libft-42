/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asulisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:19:17 by asulisti          #+#    #+#             */
/*   Updated: 2021/12/29 15:11:48 by asulisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_trim_start_index(char const *s1, char const *set)
{
	int	i;
	int	len_set;

	i = 0;
	len_set = ft_strlen(set);
	while (ft_strncmp(s1 + i, set, len_set) == 0)
	{
		i = i + len_set;
	}
	return (i);
}

int	find_trim_end_index(char const *s1, char const *set)
{
	int	j;
	int	len_set;

	j = 0;
	len_set = ft_strlen(set);
	while (ft_strlen(s1) - len_set - j > 0 && ft_strncmp
		(s1 + ft_strlen(s1) - len_set - j, set, len_set) == 0)
	{
		j = j + len_set;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = find_trim_start_index(s1, set);
	j = find_trim_end_index(s1, set);
	result = ft_substr(s1, i, ft_strlen(s1) - i - j);
	return (result);
}
/*
int main (void)
{
    printf("%s", ft_strtrim("dirinyadirinyadirinya 
	nitadirinyadirinyadirinya", "dirinya"));
}
*/
