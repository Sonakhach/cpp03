#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
  ScavTrap obj("Sona");
    ScavTrap ob = obj;
    // ClapTrap o("Sa");
    ob.attack("LOL");
    ob.takeDamage(3);
    // obj.attack("TOTO");
    // obj.beRepaired(4);
    // obj.takeDamage(10);
    // obj.guardGate();
    // o.attack("LLLLL");
    return 0;
}
