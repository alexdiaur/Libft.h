# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz <fdiaz@student.42madrid.co>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 15:02:53 by fdiaz             #+#    #+#              #
#    Updated: 2022/09/13 15:32:12 by fdiaz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =  *.c

all = $(NAME)

$(NAME):
	ar -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
