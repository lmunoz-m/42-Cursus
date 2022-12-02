# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 18:37:11 by lmunoz-m          #+#    #+#              #
#    Updated: 2022/10/12 18:24:44 by lmunoz-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_putnbr.c ft_putstr.c ft_putunsigned.c write_args.c ft_putpointer.c ft_puthex.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR = ar rc

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
				${RM} ${OBJS}

fclean: 	clean
				${RM} ${NAME}

re: 		fclean all
