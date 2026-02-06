#include "DiamondTrap.hpp"

DiamondTrap :: DiamondTrap() : ClapTrap("DiamondTrap")
{
	this->_name = "Default Diamond Trap";
	this-> hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap Default constructor called !!!" << std::endl;
}

DiamondTrap:: DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this-> hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap String constructor called !!!" << std::endl;
}

DiamondTrap :: DiamondTrap(const DiamondTrap &next) : ClapTrap(next), ScavTrap(next), FragTrap(next)
{
	*this = next;
	std::cout << "DiamondTrap copy constructor called !!!" <<std::endl;
}

DiamondTrap &DiamondTrap :: operator=(const DiamondTrap &next)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = next._name + "_clap_trap";
	this->hit_point = next.hit_point;
	this->energy_point = next.energy_point;
	this->attack_damage =  next.attack_damage;
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