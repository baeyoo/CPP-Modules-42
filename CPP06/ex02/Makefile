
NAME 	=	Identify

SRCS	=	main.cpp	\
			Base.cpp	\
			A.cpp	\
			B.cpp	\
			C.cpp	\

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