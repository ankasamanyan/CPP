NAME = PmergeMe

SRC =	 main.cpp

PURPLE	= "\033[0;34m"
PINK	= "\033[0;35m"
RESET	= "\033[0m"
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:$(NAME)
%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(SRC)
	@$(CC) $(SRC) $(FLAGS) -o $(NAME)
	@echo $(PURPLE)"•    ✨ COMPILED ✨    •"$(RESET)  #&& say -v Milena "Your stupid program is Compiled!"
#	@bash Catto.sh

fclean:
	@$(RM) $(NAME)
	@echo $(PINK)"•     ✨ CLEANED ✨    •"$(RESET)  #&& say -v Milena "Your stupid program is cleaned!"

re: fclean all

git:
	git add .
	@read -p "Enter the commit message: " halp; \
	git commit -m "$$halp"
	git push
	@echo $(PURPLE) ✨All added, commited and pushed✨ $(RESET)

push:
	git add .
	git commit -m "✨"
	git push
	@echo $(PURPLE) ✨All added, commited and pushed✨ $(RESET)

run: all
	@./$(NAME) 2 4 7 2 5 6 34 76 90 2 556
	
