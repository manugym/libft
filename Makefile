
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc 
CLEAN = rm -f
MY_SRC = ft_isalpha.c
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

