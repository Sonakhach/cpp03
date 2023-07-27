#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap &obj);
        FragTrap& operator=(const FragTrap &obj);
        FragTrap(const std::string & name);
        virtual ~FragTrap();
        void highFivesGuys(void);
        virtual void attack(const std::string& target);    
};
#endif