# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlunga <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:45:30 by nlunga            #+#    #+#              #
#    Updated: 2019/05/23 14:12:52 by nlunga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRCS = *.c

OBJECTS = *.o

HEADER = libft.h

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRCS)   
	ar rc libft.a $(OBJECTS)
	ranlib libft.a

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
