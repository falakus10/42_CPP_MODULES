#include "FragTrap.hpp"

FragTrap :: FragTrap() : ClapTrap()
{
    this->guard_gate = 0;
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap default constructor called !!!" << std::endl;
}

FragTrap :: FragTrap(std::string name) : ClapTrap(name)
{
    this->guard_gate = 0;
    this->hit_point = 100;
    this->energy_point = 10;
    this->attack_damage = 30;
    std::cout << "FragTrap string constructor called !!!" << std::endl;
}

FragTrap ::FragTrap(const FragTrap &next) :ClapTrap(next)
{
    std::cout << "StavTrap copy constructor called !!!" << std::endl;
}

FragTrap &FragTrap :: operator=(const FragTrap &next)
{
    if(this != &next)
    {
        ClapTrap::operator=(next);
    }
    return (*this);
}

FragTrap :: ~FragTrap()
{
    std::cout << "FragTrap destructor called !!!" << std::endl;
}

void FragTrap :: highFivesGuys(void)
{
	std::cout << "I request the highest of fives !!!" << std::endl;
}