NAME = Span

FLAGS = -Wall -Wextra -Werror -std=gnu++98

SRCS = span.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@echo "Compiling Span..."
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
	