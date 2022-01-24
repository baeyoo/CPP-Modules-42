
NAME 	=	Bureaucrat

CC 		=	clang++

SRCS	=	./Bureaucrat.cpp \
			./Form.cpp	\
			./ShrubberyCreationForm.cpp	\
			./main.cpp	\
			./PresidentialPardonForm.cpp	\
			./RobotomyRequestForm.cpp	\
			./Intern.cpp

CFLAGS 	=	-Wall -Wextra -Werror -std=c++98

OBJ 	= 	$(SRCS:.cpp=.o)

%.o : %.cpp
		 $(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			@rm -f $(OBJ) *_*ry

fclean	:	clean
			@rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
