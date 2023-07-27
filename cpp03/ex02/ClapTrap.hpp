#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        virtual ~ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &t);
        ClapTrap& operator = (const ClapTrap& t);
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
       
    protected:
        std::string m_name;
        int m_Hit ;
        int m_Energy ;
        int m_Attack_damage ;

};

#endif 