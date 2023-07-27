#include "FragTrap.hpp"

FragTrap::FragTrap()
{ 
    std::cout << "this is FragTrap default constructor" << std::endl;
    ClapTrap::m_Hit = 100;
    ClapTrap::m_Energy = 100;
    ClapTrap::m_Attack_damage = 30;
};
FragTrap::~FragTrap()
{
    std::cout << "this is FragTrap destructor" << std::endl;

};
FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
    std::cout << "this is Copy constructor FragTrap" << std::endl;
    
    *this = obj;
};
FragTrap& FragTrap::operator = (const FragTrap& obj)
{
    std::cout << "this is  assigment operator FragTrap" << std::endl;
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return (*this);
};
FragTrap::FragTrap(const std::string &name)
{
    this->m_name = name;
    this->m_Hit = 100;
    this->m_Energy = 100;
    this->m_Attack_damage = 30;
    std::cout << "this is parametr FragTrap constructor" << std::endl;
};

void FragTrap::attack(const std::string& target)
{
    if (this->m_Energy > 0 && this->m_Hit > 0)
    {
        std::cout << "FragTrap " << this->m_name << " attacks " << target << ", causing " << this->m_Attack_damage << " points of damage! " << std::endl;
        this->m_Energy--;
        std::cout << "energy " << m_Energy << std::endl;
    }
    else
        std::cout << "FragTrap" << this->m_name << " do not Energy" << std::endl;
};
void FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high fives ." << std::endl;
};