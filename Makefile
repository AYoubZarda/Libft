# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azarda <azarda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 17:16:06 by azarda            #+#    #+#              #
#    Updated: 2022/11/02 13:34:08 by azarda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

ARC = ar rc

LIBRARY = libft.h

SRC = ft_isdigit.c ft_memset.c  ft_isprint.c ft_putendl_fd.c ft_itoa.c ft_strmapi.c \
		ft_bzero.c ft_putchar_fd.c  ft_atoi.c ft_strncmp.c ft_memchr.c ft_striteri.c \
		ft_tolower.c  ft_strlen.c ft_putstr_fd.c ft_strlcat.c ft_calloc.c ft_strtrim.c \
		ft_toupper.c ft_isalnum.c ft_strrchr.c  ft_strlcpy.c ft_memcmp.c ft_split.c \
		ft_isalpha.c ft_memcpy.c ft_strchr.c  ft_putnbr_fd.c ft_strnstr.c ft_strjoin.c \
		ft_isascii.c ft_memmove.c ft_isascii.c ft_strchr.c ft_strdup.c ft_substr.c 

OBJS = $(SRC:.c=.o)



all:$(NAME)

$(NAME): $(OBJS)
	$(ARC) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

%.o : %.c	$(LIBRARY)
	$(CC) $(CFLAGS) -c $<
	


fclean: clean
	rm -f $(NAME)

re : fclean all