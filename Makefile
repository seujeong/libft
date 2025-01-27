# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/13 20:45:04 by seujeong          #+#    #+#              #
#    Updated: 2020/11/14 17:26:43 by seujeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c
FILES = ft_memset.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strmapi.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS_FILES =	ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstadd_front.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstsize.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c


OBJS = $(FILES:%.c=%.o)
BONUS_OBJS = $(BONUS_FILES:%.c=%.o)
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
$(OBJS): $(FILES)
		$(CC) $(CFLAGS) $(FILES)
clean:
		rm -f $(OBJS) $(BONUS_OBJS)
fclean: clean
		rm -f $(NAME)
bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
re: fclean all
