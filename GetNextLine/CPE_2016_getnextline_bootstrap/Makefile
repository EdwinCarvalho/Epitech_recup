##
## Makefile for Makefile in /home/edwin/Epitech/GetNextLine/CPE_2016_getnextline_bootstrap
## 
## Made by edwin
## Login   <edwin.rocha-carvalho@epitech.eu>
## 
## Started on  Tue Jan  3 10:31:59 2017 edwin
## Last update Wed Jan  4 09:12:51 2017 edwin
##
RM	=	rm -f

CFLAGS	+=	-Wall -Wextra -Werror
CFLAGS	+=	-I.

NAME	=	bootstrap

SRCS	=	main.c				\
		tools.c				\
		read_next_char.c		\
		read_next_ten_bytes.c		\
		read_next_x_bytes.c		\
		read_and_display_read_line_1.c	\
		read_and_display_read_line_x.c

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	find -type f \( -name "*~" -o -name "#*#" -o  -name "*.o" \) -delete

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
