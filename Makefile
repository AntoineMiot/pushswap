##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	main_pushswap.c	\
		second_list.c	\
		distrib.c

OBJ		=	$(SRC:.c=.o)

NAME	=	push_swap

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) -L./lib -lmy -I./include
	rm *.o

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f *.o

fclean:	clean
	make fclean -C lib/my/
	rm -f $(NAME)

re:	fclean all
