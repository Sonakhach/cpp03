#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{ 
    std::cout << "this is ScavTrap default constructor" << std::endl;
    ClapTrap::m_Hit = 100;
    ClapTrap::m_Energy = 50;
    ClapTrap::m_Attack_damage = 20;
};
ScavTrap::~ScavTrap()
{
    std::cout << "this is ScavTrap destructor" << std::endl;

};
ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
    std::cout << "this is Copy constructor ScavTrap" << std::endl;
    
    *this = obj;
};
ScavTrap& ScavTrap::operator = (const ScavTrap& obj)
{
    std::cout << "this is copy assigment operator ScavTrap" << std::endl;
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return (*this);
};
ScavTrap::ScavTrap(const std::string &name):  ClapTrap(name) 
{
    ClapTrap::m_Energy = 50;
    ClapTrap::m_Hit = 100;
    ClapTrap::m_Attack_damage = 20;
    std::cout << "this is parametr ScavTrap constructor" << std::endl;
};

void ScavTrap::attack(const std::string& target)
{
    if (this->m_Energy > 0 && this->m_Hit > 0)
    {
        std::cout << "ScavTrap " << this->m_name << " attacks " << target << ", causing " << this->m_Attack_damage << " points of damage! " << std::endl;
        this->m_Energy--;
        std::cout << "energy " << m_Energy << std::endl;
    }
    else
        std::cout << "ScavTrap" << this->m_name << " do not Energy" << std::endl;
};
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
};