/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anita <anita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:29:00 by asulisti          #+#    #+#             */
/*   Updated: 2022/01/11 15:18:46 by anita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int 	        ft_atoi(char *str);
void            ft_bzero(void *s, size_t lenght);
void            *ft_calloc(size_t count, size_t size);
int             ft_isalnum(char *str);
int             ft_isalpha(char *str);
int             ft_isascii(char *str);
int	            ft_isdigit(char *str);
int	            ft_isprint(char *str);
char            *ft_itoa(int n);
void	        *ft_memchr(const void *s, int c, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
void	        *ft_memcpy(void *dest, const void *src, size_t lenght);
void	        *ft_memmove(void *dst, const void *src, size_t lenght);
void	        *ft_memset(void *mem, int c, size_t lenght);
void	        ft_putchar_fd(char c, int fd);
void	        ft_putendl_fd(char *s, int fd);
void	        ft_putnbr_fd(int n, int fd);
void	        ft_putstr_fd(char *s, int fd);
char	        **ft_split(char const *s, char c);
char	        *ft_strchr(const char *s, int c);
char	        *ft_strdup(char *src);
void            ft_striteri(char *s, void (*f)(unsigned int, char*));
char	        *ft_strjoin(int size, char **strs, char *sep);
size_t      ft_strlcat(char *dest, char *src, size_t size);
size_t      ft_strlcpy(char *dest, char *src, size_t size);
size_t	    ft_strlen(const char *str);
char        *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	        ft_strncmp(const char *s1, const char *s2, size_t n);
char	        *ft_strnstr(char *str, char *to_find, int n);
char	        *ft_strrchr(const char *s, int c);
char	        *ft_strtrim(char const *s1, char const *set);
char            *ft_substr(char const *s, unsigned int start, int len);
char	        *ft_tolower(char *str);
char	        *ft_toupper(char *str);

#endif