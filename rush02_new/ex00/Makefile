# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thrattan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/25 11:21:56 by thrattan          #+#    #+#              #
#    Updated: 2023/06/25 16:32:01 by thrattan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = get_file.c 
INCS = make_struct.h
OBJS = ${SRCS:.c=.o}
NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: ${NAME}
${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all
