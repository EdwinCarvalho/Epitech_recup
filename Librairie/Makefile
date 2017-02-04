##
## Makefile for Makefile in /home/edwin/Librairie
## 
## Made by edwin
## Login   <edwin.rocha-carvalho@epitech.eu>
## 
## Started on  Wed Jan 25 15:39:06 2017 edwin
## Last update Thu Feb  2 10:02:11 2017 edwin
##
RM	=	rm -f

CFLAGS	+=	-I.

NAME	=	library.a

SRCS	=	my_putchar.c		\
		my_putstr.c		\
		my_getnbr.c		\
		free_tab.c		\
		my_swap.c		\
		my_strstr.c		\
		my_strupcase.c		\
		my_is_prime.c		\
		my_power_rec.c		\
		my_revstr.c		\
		my_putnbr.c		\
		my_strcpy.c		\
		my_strlowcase.c		\
		my_strcapitalize.c	\
		my_str_isalpha.c	\
		my_strncat.c		\
		my_strcat.c		\
		my_str_isnum.c		\
		my_strncmp.c		\
		my_strcmp.c		\
		my_strlen.c		\
		my_tablen.c		\
		my_strncpy.c		\
		my_strdup.c		\
		my_show_wordtab.c	\
		my_str_to_wordtab.c	\
		error.c

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	find -type f \( -name "*~" -o -name "#*#" -o  -name "*.o" \) -delete

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
