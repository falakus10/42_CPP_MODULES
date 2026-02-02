#include "ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
    std::cout << "Default constructor called !!!" << std::endl;
}

ClapTrap :: ClapTrap(std::string name)
{
    _name = name;
    std::cout << "String constructor called !!!" << std::endl;
}

ClapTrap :: ClapTrap(const ClapTrap &next)
{
    std::cout << "Copy constructor called !!!" << std::endl;
    this->_name = next._name;
}

ClapTrap &ClapTrap :: operator=(const ClapTrap &next)
{
    std::cout <<"Copy assigment operator called !!!" << std::endl;
    if (this != &next)
        this->_name = next._name;
    return (*this);
}

ClapTrap :: ~ClapTrap()
{
    std::cout << "Destructor called !!!" << std::endl;
}

void ClapTrap :: attack(const std::string& target)
{
    if ()
    std::cout << "ClapTrap "<< this->_name << "attacks "<<target<<",causing "<< 1 << " points of damage!" << std::endl;
}


