# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manumuno <manumuno@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 17:47:53 by manumuno          #+#    #+#              #
#    Updated: 2023/09/16 20:10:10 by manumuno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc 
CLEAN = rm -f
MY_SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		 ft_isprint.c ft_strlen.c ft_memset.c
MY_OBJ = $(MY_SRC:.c=.o)

all: $(NAME)

$(NAME): $(MY_OBJ) 
	ar rcs $(NAME) $(MY_OBJ)

clean:
	@$(CLEAN) $(MY_OBJ)

fclean: clean
	@$(CLEAN) $(NAME)

re:	fclean all 
.PHONY: all clean fclean re

