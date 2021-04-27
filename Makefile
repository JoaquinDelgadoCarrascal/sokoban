##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## principal Makefile
##

NAME		=	my_sokoban

SRC_PATH	=	src/

SRC_PATH_U	=	src/utils/

SRC_PATH_O	=	src/open_and_read/

SRC_PATH_M	=	src/move_player/

SRC_PATH_G	=	src/get_positions/

SRC_PATH_F	=	src/free/

SRC			=	main.c						\
				main_loop.c					\
				make_map.c					\
				reset_map.c					\
				help.c						\
				error_handling.c			\
				is_game_finished.c			\
				get_len_line.c				\

SRC_U		=	my_putchar.c				\
				my_putstr.c					\
				my_strcmp.c					\
				my_strlen.c					\
				my_arraylen.c				\
				my_str_to_word_array_mod.c	\
				my_print_array.c			\
				count_lines.c				\
				my_strdup.c					\
				my_arraydup.c				\

SRC_O		=	get_file.c					\
				read_file.c					\
				size_of_bytes.c				\

SRC_M		=	is_check.c					\
				move_right.c				\
				move_left.c					\
				move_up.c					\
				move_down.c					\

SRC_F		=	free.c						\
				free_array.c				\

SRC_G		=	get_player_position.c		\

SRCS		+=	$(addprefix $(SRC_PATH), $(SRC)) $(addprefix $(SRC_PATH_U), $(SRC_U))
SRCS		+=	$(addprefix $(SRC_PATH_O), $(SRC_O)) $(addprefix $(SRC_PATH_M), $(SRC_M))
SRCS		+=	$(addprefix $(SRC_PATH_G), $(SRC_G)) $(addprefix $(SRC_PATH_F), $(SRC_F))

OBJ			=	$(SRCS:.c=.o)

RM			=	rm -f

TRASH		=	*~ vgcore*

CFLAGS		+=	-I./include/ -lncurses -g3 -pedantic -W -Wall -Wextra -Wpedantic -Wno-long-long

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		$(RM) $(OBJ) $(TRASH)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all