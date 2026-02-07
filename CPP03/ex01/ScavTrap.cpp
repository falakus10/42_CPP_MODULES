#include "ScavTrap.hpp"

ScavTrap :: ScavTrap() : ClapTrap()
{
    this->guard_gate = 0;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 25;
    std::cout << "ScavTrap default constructor called !!!" << std::endl;
}

ScavTrap :: ScavTrap(std::string name) : ClapTrap(name)
{
    this->guard_gate = 0;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 25;
    std::cout << "ScavTrap string constructor called !!!" << std::endl;
}

ScavTrap ::ScavTrap(const ScavTrap &next) :ClapTrap(next)
{
    std::cout << "ScavTrap copy constructor called !!!" << std::endl;
}

ScavTrap &ScavTrap :: operator=(const ScavTrap &next)
{
    if(this != &next)
    {
        ClapTrap::operator=(next);
    }
    std::cout <<"ScavTrap Copy assigment operator called !!!" <<std::endl;
    return (*this);
}

ScavTrap :: ~ScavTrap()
{
    std::cout << "ScavTrap destructor called !!!" << std::endl;
}

void ScavTrap :: attack(const std::string& target)
{
    if (this->energy_point == 0 )
        std::cout << "There isn't any energy point for this ScavTrap!" << std::endl;
    else if (this->hit_point == 0)
        std::cout << "There isn't any hit point for this ScavTrap!" << std::endl;
    else
        std::cout << "ScavTrap "<< this->_name << " attacks "<<target<<" ,causing "<< 1 << " points of damage!" << std::endl;
}

void ScavTrap :: guardGate()
{
    if (this->guard_gate)
    {
        this->guard_gate = 0;
        std::cout << "ScavTrap "<< this->_name << " isn't a gate guard anymore !!!" << std::endl;
    }
    else
    {
        this->guard_gate = 1;
        std::cout << "ScavTrap "<< this->_name << " is a gate guard now !!!" << std::endl;
    }
}



