# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbruno-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 14:03:17 by fbruno-s          #+#    #+#              #
#    Updated: 2023/11/02 14:39:13 by fbruno-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBS = libft.h
SOURCES = main.c
NAME = libft

$(NAME): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME) $(LIBS)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)

.PHONY: all clean fclean re
