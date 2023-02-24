/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:16:14 by ansulist          #+#    #+#             */
/*   Updated: 2022/11/22 13:54:35 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	str = malloc(ft_strlen((char *)s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
//dia di gunakan untuk pengaplikasian satu 
//fungsi keseluruh str yg ada
//menggunakan malloc untuk mangalokasikan 
//sementara str baru yang mau di aplikasikan fungsi
// char test_func(unsigned int i, char str)
// {
//  	printf("aplikasi fungsi = %d dan %c\n", i, str);
//  	return str - 32;
// }

// int main()
// {
//  	char str[10] = "hello.";
//  	printf("hasil 1 %s\n", str);
//  	char *result = ft_strmapi(str, &test_func);
//     printf("hasil 2 %s\n", result);
//     return 0;
// }