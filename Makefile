# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibittar <ibittar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 13:15:50 by ibittar           #+#    #+#              #
#    Updated: 2024/05/13 13:12:40 by ibittar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isascii.c \
ft_memmove.c \
ft_strlcpy.c \
ft_tolower.c \
ft_atoi.c \
ft_isdigit.c \
ft_memset.c \
ft_strlen.c \
ft_toupper.c \
ft_bzero.c \
ft_isprint.c \
ft_strchr.c \
ft_strncmp.c \
ft_calloc.c \
ft_memchr.c \
ft_strdup.c \
ft_strnstr.c \
ft_isalnum.c \
ft_memcmp.c \
ft_strjoin.c \
ft_strrchr.c \
ft_isalpha.c \
ft_memcpy.c \
ft_strlcat.c \
ft_substr.c \
ft_putnbr_fd.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_striteri.c \
ft_strmapi.c \
ft_itoa.c \
ft_split.c \
ft_strtrim.c \
ft_atoi.c \
ft_calloc.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
