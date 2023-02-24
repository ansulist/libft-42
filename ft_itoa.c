/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:03:09 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/19 18:22:10 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length_int(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (10);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_negative(int n)
{
	int		i;
	char	*newnumber;
	int		len;

	len = ft_length_int(n);
	newnumber = (char *)malloc(len + 2);
	if (newnumber == NULL)
		return (NULL);
	newnumber[0] = '-';
	newnumber[len + 1] = '\0';
	i = 0;
	while (i < len)
	{
		newnumber[len - i] = (n % 10) * -1 + '0';
		n /= 10;
		i++;
	}
	return (newnumber);
}

char	*ft_itoa_positive(int n)
{
	int		i;
	char	*newnumber;
	int		len;

	len = ft_length_int(n);
	newnumber = (char *)malloc(len + 1);
	if (newnumber == NULL)
		return (NULL);
	newnumber[len] = '\0';
	i = 0;
	while (i < len)
	{
		newnumber[len - 1 - i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (newnumber);
}

char	*ft_itoa(int n)
{
	if (n < 0)
		return (ft_itoa_negative(n));
	else
		return (ft_itoa_positive(n));
}

// #include <stdio.h>
// fungsi ini berguna untuk mengubah dari angka asli
// kedalam character dari angka tersebut dalam bentuk string
// int main    (void)
// {
//     printf ("%s\n", ft_itoa(0100));
// So when you pass 100 to your program it interprets that as decimal 100, 
// which is the same as octal 144, and when you type 0100 it 
// interprets it as octal 100, which is the same as decimal 64.
//     printf ("%s\n", ft_itoa(01000));
//     // printf ("%s\n", ft_itoa(4));
//     // printf ("%s\n", ft_itoa(10));
//     // printf ("%s\n", ft_itoa(145));
//     // printf ("%s\n", ft_itoa(-145));
// }