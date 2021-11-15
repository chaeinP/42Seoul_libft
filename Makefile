# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaepark <chaepark@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 23:40:54 by chaepark          #+#    #+#              #
#    Updated: 2021/11/16 01:09:34 by chaepark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_atoi.c ft_calloc.c ft_strdup.c\
		\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_itoa.c ft_strmapi.c ft_striteri.c

OBJS = $(SRCS:.c=.o)

BO_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			ft_lstmap.c

BO_OBJS = $(BO_SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

ifdef WITH_BONUS
	OBJECTS = $(OBJS) $(BO_OBJS)
else
	OBJECTS = $(OBJS)
endif

.c.o:
					${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJECTS)
					ar rcs $(NAME) $(OBJECTS)

bonus:
					make WITH_BONUS=1 ${all}

all:	$(NAME)

clean:
					rm -f ${OBJS} ${BO_OBJS}

fclean:	clean
					rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re bonus
