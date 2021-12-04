# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 20:42:32 by yel-aoun          #+#    #+#              #
#    Updated: 2021/12/03 21:19:41 by yel-aoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printchar.c ft_printstr.c ft_printhexa.c ft_printadd.c ft_printdec.c \
	ft_cal_dec.c ft_cal_hexa.c ft_printunsigned.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -c

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
