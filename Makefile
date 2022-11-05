# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 08:57:31 by yoyahya           #+#    #+#              #
#    Updated: 2022/11/04 18:48:03 by yoyahya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AR = ar crs
CFLAGS = -Wall -Wextra -Werror 

SRC = ft_printf.c ft_putadrs.c ft_putchar.c ft_putnbr.c ft_putstr.c \
	ft_puthx.c ft_putnbr_un.c

OBJ = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJ}
	cc ${CFLAGS} -c ${SRC}
	${AR} ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all