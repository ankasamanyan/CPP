PURPLE	= "\033[0;34m"
PINK	= "\033[0;35m"
RESET	= "\033[0m"
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = PhoneBook.cpp main.cpp Contact.cpp
RM = rm -f

NAME = phonebook

all:
	@$(CC) $(SRC) $(FLAGS) -o $(NAME)
	@echo $(PURPLE)• ✨ COMPILED ✨ •$(RESET)

fclean:
	@$(RM) $(NAME)
	@echo $(PINK)• ✨ CLEANED ✨ •$(RESET)

run: all
	@./$(NAME)
