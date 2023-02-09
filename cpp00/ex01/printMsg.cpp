#include "PhoneBook.hpp"
#include "Contact.hpp"

void	instructions()
{
		std::cout << std::endl << SKY << "		+======================+" << RESET_LINE;
		std::cout << SKY << "		|   " << RESET << "ENTER THE COMMAND" << SKY << "  |" << RESET_LINE;
		std::cout << SKY << "		+======================+" << RESET_LINE;
		std::cout << SKY << std::endl << "	+=======+    +==========+    +========+" << RESET_LINE;
		std::cout << SKY << "	|  " << RESET << "Add" << SKY << "  |    |  " << RESET << "Saerch" << SKY << "  |    |  " << RESET << "Exit" << SKY << "  |" << RESET_LINE;
		std::cout << SKY << "	+=======+    +==========+    +========+" << RESET_LINE;
		std::cout << SKY << "	|  " << RESET << "-a" << SKY << "   |    |    " << RESET << "-s" << SKY << "    |    |   " << RESET << "-e " << SKY << "  |" << RESET_LINE;
		std::cout << SKY  << "	+-------+    +----------+    +--------+" << RESET_LINE;
}