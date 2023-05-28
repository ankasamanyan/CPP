NAME = convert

SRC =	main.cpp \
		ScalarConverter.cpp

PURPLE	= "\033[0;34m"
PINK	= "\033[0;35m"
RESET	= "\033[0m"
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g
RM = rm -f

all:$(NAME)
%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(SRC)
	@$(CC) $(SRC) $(FLAGS) -o $(NAME)
	@echo $(PURPLE)•	✨ COMPILED ✨	•$(RESET)

fclean:
	@$(RM) $(NAME)
	@echo $(PINK)•	✨ CLEANED ✨	•$(RESET)

re: fclean all

git:
	git add .
	@read -p "Enter the commit message: " halp; \
	git commit -m "$$halp"
	git push
	@echo $(PURPLE) ✨All added, commited and pushed✨ $(RESET)

run: all
	@./$(NAME)
