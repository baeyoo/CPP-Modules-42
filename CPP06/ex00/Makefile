
NAME 	=	ScalarConversion

SRCS	=	Conversion.cpp \
			main.cpp	

CFLAGS 	=	-Wall -Wextra -Werror 

CC		=	clang++

OBJ		=	$(SRCS:%.cpp=%.o)

%.o:%.cpp
			@ $(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			@rm -f $(OBJ)

fclean	:	clean
			@rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re