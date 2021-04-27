##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## principal Makefile
##

NAME		=	bsq

SRC_PATH	=	src/

SRC			=	main.c					\
				error_handling.c		\
				lines_and_columns.c		\
				clean_number.c			\
				change_to_binary.c		\
				compare_algorithm.c		\
				inicialize_square.c		\
				create_matrix.c			\
				size_of_bytes.c			\
				print_croses.c			\

SRCS		=	$(addprefix $(SRC_PATH), $(SRC))

OBJ			=	$(SRCS:.c=.o)

RM			=	rm -f

LDLIBS		+=	-L./lib/my/ -lmy

CFLAGS	  += -I./include/ -I./lib/my/include -pedantic -W -Wall -Wextra -Wpedantic -Wno-long-long -Werror -g

all:		$(NAME)

$(NAME):	make_lib $(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDLIBS) $(CFLAGS)

make_lib:
		cd lib/my/; $(MAKE) -f Makefile

clean:
		$(RM) $(OBJ)
		cd lib/my/; $(MAKE) -f Makefile clean

fclean:		clean
		rm -rf $(NAME)
		cd lib/my/; $(MAKE) -f Makefile fclean

re:		fclean all
		cd lib/my/; $(MAKE) -f Makefile re
