#include "../includes/AMateria.hpp"

AMateria :: AMateria() : _type("AMateria Regular")
{
	//std::cout << "AMateria default constructer called !!!" << std::endl;
}

AMateria :: AMateria(std::string const &type)
{
	_type = type;
	//std::cout << "AMateria string constructor called !!!" << std::endl;
}

AMateria :: AMateria(AMateria const &next) : _type(next._type)
{
	//std::cout << "AMateria copy constructor called !!!" <<std::endl;
}

AMateria &AMateria :: operator=(AMateria const &next)
{
	if (this != &next)
	{
		_type = next._type;
	}
	//std::cout << "AMateria copy assigment operator called !!!" << std::endl;
	return (*this);
}

AMateria :: ~AMateria()
{
	//std::cout << "AMateria destructor called !!!" << std::endl;
}

void AMateria :: use(ICharacter& target)
{
	(void)target;
	//std::cout << "Does something to " << target.getName() << std::endl;
}

std::string const &AMateria :: getType() const
{
	return (_type);
} 