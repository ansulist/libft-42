/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asulisti <asulisti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:37:30 by asulisti          #+#    #+#             */
/*   Updated: 2021/12/29 16:44:42 by asulisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_the_len(int size, char **strs, char *sep)
{
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
	{	
		len = len + ft_strlen(sep) * (size - 1);
	}
	len = len + 1;
	return (len);
}

void	fake_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		j;
	char	*str;

	len = ft_get_the_len(size, strs, sep);
	str = malloc(sizeof(char) * len);
	i = 0;
	j = 0;
	while (i < size)
	{
		fake_strncpy(str + j, strs[i], ft_strlen(strs[i]));
		j = j + ft_strlen(strs[i]);
		if (i + 1 < size)
		{
			fake_strncpy(str + j, sep, ft_strlen(sep));
			j = j + ft_strlen(sep);
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(int ac, char **av)
{
	char *str = ft_strjoin(ac - 1, av + 1, "-");

	printf("%s\n", str);
	free(str);
}*/
