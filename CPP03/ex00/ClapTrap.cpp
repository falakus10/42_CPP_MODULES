#include "ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
    _name = "He Who Must Not Be Named";
    hit_point = 10;
    energy_point = 10;
    attack_damage = 0;
    std::cout << "ClapTrap Default constructor called !!!" << std::endl;
}

ClapTrap :: ClapTrap(std::string name)
{
    hit_point = 10;
    energy_point = 10;
    attack_damage = 0;
    _name = name;
    std::cout << "ClapTrap String constructor called !!!" << std::endl;
}

ClapTrap :: ClapTrap(const ClapTrap &next)
{
    std::cout << "ClapTrap Copy constructor called !!!" << std::endl;
    this->_name = next._name;
}

ClapTrap &ClapTrap :: operator=(const ClapTrap &next)
{
    std::cout <<"ClapTrap Copy assigment operator called !!!" << std::endl;
    if (this != &next)
        this->_name = next._name;
    return (*this);
}

ClapTrap :: ~ClapTrap()
{
    std::cout << "ClapTrap Destructor called !!!" << std::endl;
}

void ClapTrap :: attack(const std::string& target)
{
    if (this->energy_point == 0 )
        std::cout << "There isn't any energy point for this ClapTrap!" << std::endl;
    else if (this->hit_point == 0)
        std::cout << "There isn't any hit point for this ClapTrap!" << std::endl;
    else
        std::cout << "ClapTrap "<< this->_name << " attacks "<<target<<" ,causing "<< 1 << " points of damage!" << std::endl;
}

void ClapTrap :: takeDamage(unsigned int amount)
{
    std::cout << "Attack caused " << amount << " point of damage to this ClapTrap!" << std::endl;
}

void ClapTrap :: beRepaired(unsigned int amount)
{
    if (this->energy_point == 0)
        std::cout << "You don't have any energy points. You can't repair this ClapTrap!" << std::endl; 
    else
        std::cout << "Repair is succesful " << amount << " points gained for this ClapTrap!" << std::endl;
}


