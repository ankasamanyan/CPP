NAME = brainzzzzzz

SRC = main.cpp newZombie.cpp newZombie.cpp randomChump.cpp

PURPLE	= "\033[0;34m"
PINK	= "\033[0;35m"
RESET	= "\033[0m"
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:$(NAME)
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(SRC)
	@$(CC) $(SRC) $(FLAGS) -o $(NAME)
	@echo $(PURPLE)•	✨ COMPILED ✨	•$(RESET)

fclean:
	@$(RM) $(NAME)
	@echo $(PINK)•	✨ CLEANED ✨	•$(RESET)

re: fclean all

run: all
	@./$(NAME)
