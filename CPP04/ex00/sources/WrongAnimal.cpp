#include "../includes/WrongAnimal.hpp"

WrongAnimal :: WrongAnimal()
{
	type = "Just WrongAnimal";
	std::cout << "WrongAnimal default constructor called !!!" << std::endl;
}

WrongAnimal :: WrongAnimal(std::string _type)
{
	type = _type;
	std::cout << "WrongAnimal string constructor called !!!" << std::endl;
}

WrongAnimal :: WrongAnimal(const WrongAnimal &next) : type(next.type)
{
	std::cout << "WrongAnimal Copy constructor called !!!" << std::endl;
}

WrongAnimal &WrongAnimal :: operator=(const WrongAnimal &next)
{
    if (this != &next)
    {
        type = next.type;
    }
    std::cout << "WrongAnimal copy assigment operator called !!!" << std::endl;
    return (*this);
}

WrongAnimal :: ~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called !!!" << std::endl;
}

void WrongAnimal:: makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}