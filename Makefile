# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 12:48:02 by ydumaine          #+#    #+#              #
#    Updated: 2022/03/30 11:10:40 by ydumaine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi2.c ft_push_swap.c \

BIBL = libft.a libftprintf.a \

OBJS = ${SRCS:.c=.o}

NAME = a.out

CC = cc

LINK = cc -o

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -g 

.c.o: 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

${NAME}:	${OBJS}
			${LINK} ${NAME} ${OBJS} ${BIBL} 

all:		${NAME}

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:     clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
