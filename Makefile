# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlunga <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:45:30 by nlunga            #+#    #+#              #
#    Updated: 2019/05/24 08:55:25 by nlunga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

SRCS = ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c \
   	   ./ft_isprint.c ./ft_strcat.c ./ft_strcpy.c ./ft_strlen.c ./ft_strncat.c \
   	   ./ft_strncpy.c ./ft_tolower.c ./ft_toupper.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS)   
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re, fclean, clean, all
