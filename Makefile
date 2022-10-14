# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 15:02:53 by fdiaz             #+#    #+#              #
#    Updated: 2022/10/14 16:13:55 by fdiaz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a


SRC 		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_memchr.c \
				ft_strchr.c \
				ft_strlcpy.c \
				ft_strncmp.c \
				ft_tolower.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_memcpy.c \
				ft_memset.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strrchr.c \
				ft_toupper.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_memmove.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
		
		
OBJ 		= $(SRC: .c=.o)

CFLAGS 		= -Wall -Werror -Wextra

RM 			= rm -rf

all 		= $(NAME)

$(NAME):	$(OBJS)	
			ar -rcs $(NAME) $(OBJ)

clean:		
			$(RM) $(OBJ)
			
fclean:		clean 
					$(RM) $(NAME) 

re: 		fclean all

.PHONY: 	all clean fclean re
