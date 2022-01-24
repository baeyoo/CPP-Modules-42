
NAME 	=	SwapMinMax

CC		=	clang++

SRCS	=	./main.cpp \

CFLAGS 	=	-Wall -Wextra -Werror -std=c++98

OBJ 	= 	$(SRCS:.cpp=.o)

%.o : %.cpp
		 $(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			@rm -f $(OBJ)

fclean	:	clean
			@rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re