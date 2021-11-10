# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 23:40:54 by chaepark          #+#    #+#              #
#    Updated: 2021/11/10 11:50:04 by chaepark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c

OBJS = ${SRCS:.c=.o}

HEADER = ./

CC = gcc

CFLAGS = -Wall -Wextra -Werror

TARGET = libft.a

.c.o:
					${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}
${TARGET}:	${OBJS}
					ar rcs ${TARGET} ${OBJS}

all:	${TARGET}

clean:
					rm -f ${OBJS}

fclean:	clean
					rm -f ${TARGET}

re:	fclean all

.PHONY:	all clean fclean re
