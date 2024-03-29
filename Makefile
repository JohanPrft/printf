# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 10:10:32 by jprofit           #+#    #+#              #
#    Updated: 2022/11/29 15:05:29 by jprofit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# ARGUMENTS

NAME	=	libftprintf.a

FLAGS	=	-Wall -Wextra -Werror

F_PRINTF=	ft_putchar_fd.c			ft_putstr_fd.c		ft_putunbr_b.c 		\
			ft_putnbr.c 			ft_putaddr.c

HEADER	=	ft_printf.h

SRCS	=	$(addprefix srcs/, ${F_PRINTF})									\
			ft_printf.c

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
