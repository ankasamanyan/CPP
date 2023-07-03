#pragma once

#include "Utils.hpp"
#include <iostream>
#include <fstream>
#include <stack>

bool	is_sign(char element);
bool	inValidInput(std::string stringy);
int     operation(char operation, int first, int second);
void	reversePolishNotation(char **argv, int argc);

