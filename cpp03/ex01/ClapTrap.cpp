#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "this is ClapTrap default constructor" << std::endl;
    this->m_name = "default_name";
    this->m_Energy =10;
    this->m_Hit = 10;
    this->m_Attack_damage = 0;
};

ClapTrap::~ClapTrap()
{
    std::cout << "this is ClapTrap destructor" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &t)
{
    std::cout << "this is ClapTrap Copy constructor" << std::endl;
    this->m_name = t.m_name;
    this->m_Energy = t.m_Energy;
    this->m_Hit = t.m_Hit;
    this->m_Attack_damage = t.m_Attack_damage;    
};

ClapTrap& ClapTrap::operator = (const ClapTrap& t)
{
    std::cout << "this is ClapTrap Copy assigment operator" << std::endl;
    if (this != &t)
    {
        this->m_name = t.m_name;
        this->m_Energy = t.m_Energy;
        this->m_Hit = t.m_Hit;
        this->m_Attack_damage = t.m_Attack_damage;
    }
    return (*this);
}

ClapTrap::ClapTrap(const std::string &name)
{
    this->m_name = name;
    this->m_Energy =10;
    this->m_Hit = 10;
    this->m_Attack_damage = 0;
    std::cout << "this is ClapTrap parametr constructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->m_Hit == 0 || this->m_Energy == 0)
        return;
    if (this->m_Energy > 0 && this->m_Hit > 0)
    {
        std::cout << "ClapTrap " << this->m_name << " attacks " << target << ", causing " << this->m_Attack_damage << " points of damage! " << std::endl;
        this->m_Energy--;
        std::cout << "energy " << m_Energy << std::endl;
    }

};

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->m_Hit > 0)
    {
        std::cout << "ClapTrap " << this->m_name << " lost " << amount << " amount of Hit point" << std::endl;
        this->m_Hit -= amount;
        std::cout << "Hit " << m_Hit << std::endl;
    }
    else
        this->m_Hit = 0;
};

void ClapTrap::beRepaired(unsigned int amount)
{
     if (this->m_Hit == 0 || this->m_Energy == 0)
        return;
    if (this->m_Hit > 0 && this->m_Energy > 0)
    {
        std::cout << "ClapTrap " << this->m_name << " has got " <<  amount << " amount of Hit point." << std::endl;
        this->m_Hit+=amount;
        this->m_Energy++;
        std::cout << "energy " << m_Energy << std::endl;
         std::cout << "Hit " << m_Hit << std::endl;
    }

};
