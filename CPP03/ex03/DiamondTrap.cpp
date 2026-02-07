#include "DiamondTrap.hpp"

DiamondTrap :: DiamondTrap() : ClapTrap("DefaultDiamond_clap_name")
{
	this->_name = "DefaultDiamond";
	this-> hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap default constructor called !!!" << std::endl;
}

DiamondTrap:: DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") ,ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this-> hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap string constructor called !!!" << std::endl;
}

DiamondTrap :: DiamondTrap(const DiamondTrap &next) : ClapTrap(next), ScavTrap(next), FragTrap(next)
{
	std::cout << "DiamondTrap copy constructor called !!!" <<std::endl;
}

DiamondTrap &DiamondTrap :: operator=(const DiamondTrap &next)
{
    if(this != &next)
    {
        ClapTrap::operator=(next);
    }
    std::cout <<"DiamondTrap Copy assigment operator called !!!" <<std::endl;
    return (*this);
}

DiamondTrap :: ~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called !!!" << std::endl;
}

void DiamondTrap :: attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap :: whoAmI()
{
	std::cout << "My name is " << this->_name << " But everybody calls me " << ClapTrap::_name << " !!!" <<std::endl;
}