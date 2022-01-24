NAME = MutantStack

FLAGS = -Wall -Wextra -Werror -std=gnu++98

SRCS = MutantStack.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@echo "Compiling MutantStack..."
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@echo "Creating objects..."
	@clang++ $(FLAGS) -c $(SRCS)

all: $(NAME)

clean:
	@echo "Cleaning up the mess..."
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)