# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 11:42:32 by mamazzal          #+#    #+#              #
#    Updated: 2022/10/29 17:07:32 by mamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libftprintf.a

CFLAGS  = -Wall -Werror -Wextra -c

CC = gcc

SRCS =	ft_printf.c ft_get_format.c ft_hexadecimal.c ft_print_address.c \
		ft_print_unsi.c ft_putchar.c ft_putnbr.c ft_putstr.c \

OBJS =	ft_printf.o ft_get_format.o ft_hexadecimal.o ft_print_address.o \
		ft_print_unsi.o ft_putchar.o ft_putnbr.o ft_putstr.o \

all : $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re: fclean all
