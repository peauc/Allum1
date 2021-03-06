##
## Makefile for makefile in /home/peau_c
##
## Made by
## Login   <peau_c@epitech.net>
##
## Started on  Wed Dec  9 12:17:54 2015
## Last update Wed Feb 24 19:14:51 2016 Clement Peau
##

SRC=		src/main.c \
		src/create.c \
		src/show_allum.c \
		src/calc.c	\
		src/strlen.c \
		src/error_line.c \
		src/remove_matches.c \
		src/ia.c \
		src/ia_xor.c \
		src/putnbr.c \
		src/check_win.c \
		src/my_getnbr.c \
		src/difficulty.c \
		src/allum1_next_line.c \

OBJ=		$(SRC:.c=.o)

NAME=		allum1

CC=		gcc  $(INC)

INC=		-Iinc/

CFLAGS=		-W  -Wall -Wextra -ansi -pedantic #-Werror

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
