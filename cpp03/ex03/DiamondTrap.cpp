#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "this is DiamondTrap default constructor" << std::endl;
    this->m_name = "default_name";
    this->m_name = ClapTrap::m_name + "_clap_name";
    this->m_Hit = FragTrap::m_Hit;
    this->m_Energy = ScavTrap::m_Energy;
    this->m_Attack_damage = FragTrap::m_Attack_damage;
    
};
DiamondTrap::~DiamondTrap()
{
    std::cout << "this is DiamondTrap Destructor" << std::endl;
};
DiamondTrap::DiamondTrap(const std::string &name) 
{
   
    std::cout << "this is parametr DiamondTrap constructor" << std::endl;
    this->m_name = name;
    this->m_name = ClapTrap::m_name + "_clap_name";
    this->m_Hit = FragTrap::m_Hit;
    this->m_Energy = ScavTrap::m_Energy;
    this->m_Attack_damage = FragTrap::m_Attack_damage;
};
DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    std::cout << "this is copy  DiamondTrap constructor" << std::endl;
    this->m_name = obj.m_name;
    this->m_name = obj.m_name + "_clap_name";
    this->m_Hit = obj.m_Hit;
    this->m_Energy = obj.m_Energy;
    this->m_Attack_damage = obj.m_Attack_damage;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & obj)
{
    std::cout << "this is copy assignment DiamondTrap operator" << std::endl;
    if (this != &obj)
        {
            this->m_name = obj.m_name;
            this->m_Hit = obj.m_Hit;
            this->m_Energy = obj.m_Energy;
            this->m_Attack_damage = obj.m_Attack_damage;
        }
    return (*this);
};
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);

};
void DiamondTrap::whoAmI()
{
    std::cout << this->m_name << std::endl;
    std::cout << ClapTrap::m_name << std::endl;

};