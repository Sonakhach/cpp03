#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap &obj);
        FragTrap& operator=(const FragTrap &obj);
        FragTrap(const std::string & name);
        ~FragTrap();
        void highFivesGuys(void);
         
};
#endif