# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 10:10:32 by jprofit           #+#    #+#              #
#    Updated: 2022/11/25 13:06:48 by jprofit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# ARGUMENTS

NAME	= libft.a

FLAGS	= -Wall -Wextra -Werror

F_PRINTF=

HEADER	=	libftprintf.h

SRCS	=	$(addprefix srcs/, ${F_PRINTF})

OBJS	=	$(SRCS:.c=.o)

# **************************************************************************** #
# RULES

all: 			${NAME}

${NAME}:		${OBJS}
				$(AR) rcs $@ $^

%.o:			%.c ${HEADER} Makefile
				${CC} ${FLAGS} -c $< -o $@

clean:
				$(RM) ${OBJS}

fclean:			clean
				$(RM) ${NAME}

re:				fclean
				$(MAKE) all

.PHONY:			all clean fclean re
