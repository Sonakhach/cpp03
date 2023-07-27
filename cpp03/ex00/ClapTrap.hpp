#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &t);
        ClapTrap& operator = (const ClapTrap& t);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        // std::string geter(void)const;
        // int geterHit(void)const;
        // int geterEnergy(void)const;
        // int &geterAttack_damage(void)const;
        // void seter(std::string name);
        // void seterHit(int Hit);
        // void seterAttack_damage(int Attack_damage);
        // void seterAttack_damage(int Energy);
    private:
        std::string m_name;
        int m_Hit ;
        int m_Energy ;
        int m_Attack_damage ;

};

#endif 