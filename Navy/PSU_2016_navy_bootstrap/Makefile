##
## Makefile for Makefile in /home/edwin/Epitech/Navy/PSU_2016_navy_bootstrap
## 
## Made by edwin
## Login   <edwin.rocha-carvalho@epitech.eu>
## 
## Started on  Mon Jan 30 09:06:34 2017 edwin
## Last update Wed Feb  1 14:08:52 2017 edwin
##
RM	=	rm -f

CC	=	gcc

##CFLAGS	+=	-Wall -Wextra -Werror
CFLAGS	+=	-I. -L./lib -lmy

NAME	=	navy_bootstrap

SRCS	=	./srcs/signal_me.c	\
		./srcs/who_sig_me.c	\
		./srcs/process_info.c	\
		./srcs/kill_it.c

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
