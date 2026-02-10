#include "../includes/Animal.hpp"

Animal :: Animal()
{
	type = "Just Animal";
	std::cout << "Animal default constructor called !!!" << std::endl;
}

Animal :: Animal(std::string _type)
{
	type = _type;
	std::cout << "Animal string constructor called !!!" << std::endl;
}

Animal :: Animal(const Animal &next) : type(next.type)
{
	std::cout << "Animal Copy constructor called !!!" << std::endl;
}

Animal &Animal :: operator=(const Animal &next)
{
    if (this != &next)
    {
        type = next.type;
    }
    std::cout << "Animal copy assigment operator called !!!" << std::endl;
    return (*this);
}

Animal :: ~Animal()
{
	std::cout << "Animal destructor called !!!" << std::endl;
}

void Animal :: makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string Animal :: getType() const
{
	return(type);
}