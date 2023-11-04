# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbruno-s <fbruno-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 14:03:17 by fbruno-s          #+#    #+#              #
#    Updated: 2023/11/03 23:32:12 by fbruno-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_isalpha.c	\

OBJS = $(SRC:.c=.o)

HEAD = libft.h

AR = ar rcs

CC = cc

RM = rm -rf

FLAGS = -Wall -Wextra -Werror #-fsanitize=address // testar se há vazamento de memoria

all: $(NAME)

$(NAME): $(OBJS)

.c.o:
	@echo "Compiling: "
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I$(HEAD)
	$(AR) $(NAME) $(<:.c=.o)

clean:
	@echo "Removing the object files:"
	$(RM) $(OBJS)

fclean:	
	@echo "Removing the libft program:"
	$(RM) $(NAME)

re: fclean
	make

.PHONY: all clean fclean re
