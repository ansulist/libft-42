# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 17:17:27 by ansulist          #+#    #+#              #
#    Updated: 2022/11/17 19:56:33 by ansulist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = \
	ft_atoi.c \
    ft_calloc.c \
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

BONUS_S := $(SRC) \
    ft_lstadd_back.c \
    ft_lstadd_front.c \
    ft_lstclear.c \
    ft_lstdelone.c \
    ft_lstiter.c \
    ft_lstlast.c \
    ft_lstmap.c \
    ft_lstnew.c \
    ft_lstsize.c \

OBJ = $(SRC:.c=.o)

BONUS_O = $(BONUS_S:.c=.o)

HEADERS = ./includes

all: $(NAME)

$(NAME):
	@echo "Compiling in Progress .."
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADERS) && ar rc $(NAME) $(OBJ)
	@ar -s $(NAME) $(OBJ)
	@echo "Finished!"
clean: 
	@echo "Removing all .o's ..."
	@/bin/rm -f $(OBJ) $(BONUS_O)
	@echo "Finished!"

fclean:
	@echo "Removing lib ..."
	@/bin/rm -f $(NAME)
	@echo "Finished!"

re: fclean all

bonus: $(BONUS_O)
	@gcc -Wall -Wextra -Werror -c $(BONUS_S) -I $(HEADERS) && ar rc $(NAME) $(BONUS_O)
	@ar -s $(NAME) $(BONUS_O)

.PHONY: all clean fclean re bonus
