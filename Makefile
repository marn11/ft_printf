NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_basicfunc.c ft_printf.c handlechar.c handleintd.c handlep.c handlestr.c handleuint.c handlexx.c 
OBJ = $(SRC:.c=.o)
AR = ar -rc

all : $(NAME)

%.o : %.c ft_printf.h
		$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
		$(AR) $(NAME) $(OBJ)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : 	fclean all

.PHONY : all clean fclean re