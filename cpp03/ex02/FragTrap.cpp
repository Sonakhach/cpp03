#include "FragTrap.hpp"

FragTrap::FragTrap()
{ 
    std::cout << "this is FragTrap default constructor" << std::endl;
    m_Hit = 100;
    m_Energy = 100;
    m_Attack_damage = 30;
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
    std::cout << "this is copy assigment operator FragTrap" << std::endl;
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return (*this);
};
FragTrap::FragTrap(const std::string &name)
{
    m_name = name;
    m_Attack_damage = 30;
    m_Energy = 100;
    m_Hit = 100;
    std::cout << "this is parametr FragTrap constructor" << std::endl;
};


void FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high fives request on the standard output." << std::endl;
};