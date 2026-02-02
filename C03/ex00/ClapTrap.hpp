#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int hit_point = 10;
        int energy_point = 10;
        int attack_damage = 0;
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &next);
        ClapTrap &operator=(const ClapTrap &next);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif