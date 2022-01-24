# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 14:44:26 by mobrycki          #+#    #+#              #
#    Updated: 2021/10/08 17:19:24 by mobrycki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Humans

SRCS 	= 	./main.cpp \
			./HumanA.cpp \
			./HumanB.cpp \
			./Weapon.cpp
			

OBJS	=	$(SRCS:.cpp=.o)

CPP		=	clang++

%.o:		%.cpp 
			$(CPP) $(CFLAGS) -c $< -o $(<:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.

clean	:
		$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re