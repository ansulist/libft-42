/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:01:10 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 16:13:11 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	size_t	realnb;
	int		minusorplus;

	i = 0;
	realnb = 0;
	minusorplus = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i++] == '-')
		minusorplus *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		realnb = (realnb * 10) + (str[i] - 48);
		if (realnb > LLONG_MAX && minusorplus == 1)
			return (-1);
		if (realnb > LLONG_MAX && minusorplus == -1)
			return (0);
		i++;
	}
	return (minusorplus * realnb);
}
// another case if you give 20 digits real atoi will return -1
// but mine will give just random number
// in this case is because they are not suppose to give any result
// since they handle larger number that  they are not suppose to hadle s
// #include <stdio.h>
// int	main (int ac, char **av)
// {
// 	printf ("yours :		%d\n", ft_atoi(av[1]));
// 	printf ("orignal		%d", atoi(av[1]));
// }
