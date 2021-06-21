# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnavone <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/20 11:01:43 by cnavone           #+#    #+#              #
#    Updated: 2021/06/20 11:01:46 by cnavone          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME		= libftprintf.a

CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_printf.c ft_utils.c ft_display.c ft_putnbr_hexa.c ft_parse.c ft_print_address.c ft_print_characters.c ft_print_decimal.c ft_print_rate.c ft_print_unsigned.c 	

OBJS		= ${SRCS:.c=.o}

CC			= gcc

RM			= rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) :	${OBJS} 
	ar rc ${NAME} ${OBJS}

all :		${NAME}

clean :
		${RM} ${OBJS}

fclean :	clean
		${RM} ${NAME}

re :		fclean all

.PHONY:	all clean fclean re
