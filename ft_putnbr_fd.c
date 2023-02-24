/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:12:41 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 14:11:49 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calcul(int nb, int fd)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
			nb = 0;
		}
		else
		{
			ft_putchar_fd('-', fd);
			nb = nb * -1;
		}
	}
	if (nb != 0)
	{
		ft_calcul(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
	}
	else
	{
		ft_calcul(n, fd);
	}
}
