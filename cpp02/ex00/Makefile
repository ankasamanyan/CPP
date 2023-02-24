NAME = fixed

SRC = main.cpp Fixed.cpp

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
	@echo $(PURPLE)"•    ✨ COMPILED ✨    •"$(RESET) && say -v Milena "Your stupid program is Compiled!"
# @say -v Milena  "I'm glad to tell you, that your code is successfully compiled" 

fclean:
	@$(RM) $(NAME)
	@echo $(PINK)"•     ✨ CLEANED ✨    •"$(RESET) && say -v Milena "Your stupid program is cleaned!"

re: fclean all

git:
	git add .
	@read -p "Enter the commit message: " halp; \
	git commit -m "$$halp"
	git push
	@echo $(PURPLE) ✨All added, commited and pushed✨ $(RESET)

run: all
	@./$(NAME)