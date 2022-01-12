/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asulisti <asulisti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:41:37 by asulisti          #+#    #+#             */
/*   Updated: 2021/12/29 16:46:20 by asulisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	finding_match(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (to_find[i] != str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0' && i < (n - 1))
	{
		if (finding_match(str + i, to_find) == 1)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
