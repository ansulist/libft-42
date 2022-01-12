# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anita <anita@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 17:02:34 by asulisti          #+#    #+#              #
#    Updated: 2022/01/11 15:15:59 by anita            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c \
	ft_bzero.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_itoa.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_memset.c \
    ft_putchar_fd.c \
    ft_putendl_fd.c \
    ft_putnbr_fd.c \
    ft_putstr_fd.c \
    ft_split.c \
    ft_strchr.c \
    ft_strdup.c \
    ft_striteri.c \
    ft_strjoin.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strlen.c \
    ft_strmapi.c \
    ft_strncmp.c \
    ft_strnstr.c \
    ft_strrchr.c \
    ft_strtrim.c \
    ft_substr.c \
    ft_tolower.c \
    ft_toupper.c \

OBJ = $(SRC:.c=.o)

HEADERS = ./includes

all: $(NAME)

$(NAME):
	@echo "Compiling in Progress .."
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADERS) && ar rc $(NAME) $(OBJ)
	@echo "Finished!"
clean: 
	@echo "Removing all .o's ..."
	@/bin/rm -f $(OBJ)
	@echo "Finished!"

fclean:
	@echo "Removing lib ..."
	@/bin/fm -f $(NAME)
	@echo "Finished!"

re: fclean all
