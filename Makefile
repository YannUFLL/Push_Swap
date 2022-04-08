# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 12:48:02 by ydumaine          #+#    #+#              #
#    Updated: 2022/04/08 16:11:57 by ydumaine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi2.c push_swap.c push_swap_utils1.c push_swap_utils2.c\
push_swap_selectf.c push_swap_cmp.c push_swap_check.c\
push_swap_algo.c push_swap_algo_utils1.c push_swap_algo_utils2.c\

BIBL = libft.a libftprintf.a\

OBJS = ${SRCS:.c=.o}

NAME = push_swap

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
