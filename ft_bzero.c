/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anita <anita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:33:54 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/04 15:17:48 by anita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t lenght)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < lenght)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/* fungsi ini berguna untuk mengisi semua memori dengan \0
int main()
{
    char arr[4];
    ft_bzero(arr, 4);
    printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
}
*/
