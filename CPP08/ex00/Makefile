NAME = easyfind

FLAGS = -Wall -Wextra -Werror -std=gnu++98

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@echo "Compiling easyfind..."
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