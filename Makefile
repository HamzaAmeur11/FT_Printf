# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hameur <hameur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 15:47:11 by hameur            #+#    #+#              #
#    Updated: 2021/12/17 18:07:57 by hameur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c\
	  ft_putchar.c\
	  ft_putnbr.c\
	  ft_putstr.c\
	  ft_check_arg.c

OBJECT = $(SRC:.c=.o)

all : $(NAME)


$(NAME) : $(OBJECT)
	ar -rc $(NAME) $(OBJECT)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJECT)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY = all clean fclean re