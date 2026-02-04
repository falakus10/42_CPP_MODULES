#include "ScavTrap.hpp"

ScavTrap :: ScavTrap() : ClapTrap()
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 25;
    std::cout << "ScavTrap default constructor called !!!" << std::endl;
}

ScavTrap :: ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 25;
    std::cout << "ScavTrap string constructor called !!!" << std::endl;
}

ScavTrap ::ScavTrap(const ScavTrap &next) :ClapTrap(next)
{
    std::cout << "StavTrap copy constructor called !!!" << std::endl;
}

ScavTrap &ScavTrap :: operator=(const ScavTrap &next)
{
    if(this != &next)
    {
        ClapTrap::operator=(next);
    }
    return (*this);
}

ScavTrap :: ~ScavTrap()
{
    std::cout << "ScavTrap destructor called !!!" << std::endl;
}




