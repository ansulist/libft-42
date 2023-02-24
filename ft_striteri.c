/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:15:24 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 13:54:33 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, s + i);
		i++;
	}
}
// perbedaan dengan strmapi adalah dia balikinnya void,
// jadi secara langsung aplikasi fungsinya
// jangan lupa pakai & untung ngasih fungsinya!!
// void test_fungsi(unsigned int index, char *c)
// {
//     printf ("coba fungsi dari %d : %c\n", index, *c);
//     *c = *c - 32;
// }

// int main (void)
// {
//     char str[9] = {"hello"};

//     printf ("hasil 1 %s\n", str);
//     ft_striteri(str, &test_fungsi);
//     printf ("hasil 2 %s\n", str);
//     return 0;
// }