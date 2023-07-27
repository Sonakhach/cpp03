#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap: public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        virtual ~DiamondTrap();
        DiamondTrap(const DiamondTrap& obj);
        DiamondTrap& operator=(const DiamondTrap & obj);
        DiamondTrap(const std::string &name);
        void attack(const std::string& target);
        void whoAmI();
    private:
        std::string m_name;
};
#endif