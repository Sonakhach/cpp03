#include "ClapTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    // ClapTrap o("So ");
    FragTrap obj("Sona ");
    FragTrap ob = obj;
    ob.attack("LOL ");
    ob.takeDamage(3);
    // obj.attack("TOTO ");
    // obj.beRepaired(4);
    // obj.takeDamage(10);
    // obj.highFivesGuys();
    // o.attack("LOL");
    return 0;
}
