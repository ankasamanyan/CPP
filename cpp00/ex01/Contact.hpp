#include <string>
#include <iostream>
#include "Colours.h"

class Contact
{
    private:
        std::string _name;
        // std::string name;
    public:
        void    setName(const std::string &name);
        Contact(/* args */);
        ~Contact();
};
