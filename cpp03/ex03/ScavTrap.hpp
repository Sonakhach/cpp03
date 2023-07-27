#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &obj);
        ScavTrap& operator=(const ScavTrap &obj);
        ScavTrap(const std::string & name);
        virtual ~ScavTrap();
        void guardGate();
        virtual void attack(const std::string& target);    
};
#endif