# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 15:02:53 by fdiaz             #+#    #+#              #
#    Updated: 2022/10/26 18:28:12 by fdiaz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

SRC 		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_strlcpy.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_memcpy.c \
				ft_memset.c \
				ft_memmove.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_atoi.c	\
				ft_bzero.c	\
				# ft_memchr.c	\
				# ft_memcmp.c	\
				# ft_strchr.c	\
				# ft_strncmp.c	\
				# ft_strnstr.c	\
				# ft_strrchr.c	\
				# ft_tolower.c	\
				# ft_toupper.c	\

OBJ 		=$(SRC:.c=.o)

CC			=gcc

CFLAGS 		=-Wall -Werror -Wextra

RM 			=rm -rf

all: 		$(NAME)

$(NAME):	$(OBJ)	
			ar -rcs $(NAME) $(OBJ)

clean:		
			$(RM) $(OBJ)

fclean:		clean 
					$(RM) $(NAME) 

re: 		$(NAME)

.PHONY: 	all clean fclean re