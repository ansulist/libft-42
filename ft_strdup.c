/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:15:17 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 14:12:22 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(s1) + 1);
	if (str == 0)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main()
// {
// 	char src[] = "gregory";
// 	char *str;
// 	str = ft_strdup(src);
// 	printf("%s", str);
// 	free(str);
// }
