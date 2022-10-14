# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 15:02:53 by fdiaz             #+#    #+#              #
#    Updated: 2022/09/22 18:58:24 by fdiaz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_atoi.c \
		
OBJ = $(SRC: .c=.o)
CFLAGS += -Wall -Werror -Wextra
all = $(NAME)

$(NAME):
	ar -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
