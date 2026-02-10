#include "../includes/WrongCat.hpp"

WrongCat :: WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called !!!" << std::endl;
}

WrongCat :: WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat string constructor called !!!" << std::endl;
}

WrongCat :: WrongCat(const WrongCat &next) : WrongAnimal(next)
{
	std::cout << "WrongCat copy constructor called !!!" << std::endl;
}

WrongCat &WrongCat :: operator=(const WrongCat &next)
{
	type = next.type;
	std::cout << "WrongCat copy assigment operator called !!!" << std::endl;
	return (*this);
}

WrongCat :: ~WrongCat()
{
	std::cout << "WrongCat destructor called !!!" <<std::endl;
}

void WrongCat :: makeSound()
{
	std::cout << "Meeeooooowwwww" <<std::endl;
}