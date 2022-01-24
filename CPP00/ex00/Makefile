# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/01 12:08:38 by mobrycki          #+#    #+#              #
#    Updated: 2021/10/29 14:54:30 by mobrycki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= megaphone

SRCS	= megaphone.cpp

CFLAGS 	= -Wall -Wextra -Werror -std=c++98

CC 		= clang++

OBJ		= $(SRCS:%.cpp=%.o)

$(NAME)	:	$(OBJ)
			@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			@rm -f $(OBJ)

fclean	:	clean
			@rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re