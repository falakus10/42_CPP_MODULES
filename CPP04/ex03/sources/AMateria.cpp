#include "../includes/AMateria.hpp"

AMateria :: AMateria() : type("AMateria Regular")
{
	std::cout << "AMateria default constructer called !!!" << std::endl;
}

AMateria :: AMateria(std::string const &type)
{
	_type = type;
	std::cout << "AMateria string constructor called !!!" << std::endl;
}

AMateria :: AMateria(AMateria const &next) : _type(next._type)
{
	std::cout << "AMateria copy constructor called !!!" <<std::endl;
}

AMateria &AMateria :: operator=(AMateria const &next)
{
	if (*this != next)
	{
		_type = next._type;
	}
	std::cout << "AMateria copy assigment operator called !!!" << std::endl;
	return (*this);
}

AMateria :: ~AMateria()
{
	std::cout << "AMateria destructor called !!!" << std::endl;
}

std::string *AMateria :: clone()
{
	AMateria *clone = new AMateria(*this);
	return(clone);
}
void AMateria :: use(ICharacter& target)
{
	std::cout << "Does something to " << target.getName() << std::endl;
}