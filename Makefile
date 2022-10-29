# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ale <ale@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 15:02:53 by fdiaz             #+#    #+#              #
#    Updated: 2022/10/30 00:38:51 by ale              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		=	ft_isalpha.c \
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
				ft_atoi.c \
				ft_bzero.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c
				
OBJS			= $(SRCS:.c=.o)

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all: 			$(NAME)

$(NAME):		$(OBJS)	
						ar rcs $(NAME) $(OBJS)

clean:		
						$(RM) $(OBJS)

fclean:			clean 
						$(RM) $(NAME) 

re: 					fclean $(NAME)

.PHONY: 		all clean fclean re