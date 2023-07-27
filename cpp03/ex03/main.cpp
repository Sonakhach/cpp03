#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
int main()
{
    // ClapTrap o("So ");
    DiamondTrap obj("Sona ");
    DiamondTrap ob = obj;
    DiamondTrap i;
    i=obj;
    ob.attack("LOL ");
    ob.takeDamage(3);
    // obj.attack("TOTO ");
    // obj.beRepaired(4);
    // obj.takeDamage(10);
    // obj.highFivesGuys();
    // o.attack("LOL");
    return 0;
}
