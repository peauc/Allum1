##
## Makefile for makefile in /home/peau_c
##
## Made by
## Login   <peau_c@epitech.net>
##
## Started on  Wed Dec  9 12:17:54 2015
## Last update Sat Feb  6 17:16:09 2016 Clement Peau
##

SRC=		src/main.c \

OBJ=		$(SRC:.c=.o)

NAME=		allum1

CC=		gcc

CFLAGS=		-W -Werror -Wall -Wextra -ansi -pedantic

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
