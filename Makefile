##
## Makefile for  in /home/BLENEA_T/Projects/CPE_2021_Pushswap
##
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
##
## Started on  Mon Nov  7 14:50:43 2016 Thomas BLENEAU
## Last update Sat Nov 26 16:15:34 2016 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc -g

CFLAGS	+= -Wall -Wextra -Werror -W -g
CFLAGS	+= -I ./include

NAME	= push_swap

SRCS	= main.c \
	  ./src/push_swap.c \
	  ./src/algorithm.c \
	  ./src/push_swap_two.c \
	  ./src/push_swap_three.c \
	  ./src/isnum.c \
	  ./src/my_put_nbr.c \
	  ./src/my_list_size.c \
	  ./src/my_getnbr.c \
	  ./src/my_put_list.c \
	  ./src/my_rev_list.c \
	  ./src/utilities.c \
	  ./src/my_spaces.c \
	  ./src/my_free_space.c \
	  ./src/my_end_list.c \

OBJS	= $(SRCS:.c=.o)

$(NAME):  $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: 
