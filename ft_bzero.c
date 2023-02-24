/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:01:41 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 14:09:36 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

// fungsi ini berguna untuk mengisi semua memori dengan \0
// int main()
// {
//     char arr[4];
//     ft_bzero(arr, 4);
//     printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
// }