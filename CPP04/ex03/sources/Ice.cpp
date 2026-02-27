#include "../includes/Ice.hpp"

Ice :: Ice() : AMateria("ice")
{
    //std::cout << "Ice default constructor called !!!" << std::endl;
}

Ice :: Ice(std::string const &type) : AMateria(type)
{
    //std::cout << "Ice string constructor called !!!" << std::endl;
}

Ice :: Ice(Ice const &next) : AMateria(next)
{
    //std::cout << "Ice copy constructor called !!!" << std::endl;
}

Ice &Ice :: operator=(Ice const &next)
{
    if (this != &next)
    {
        AMateria :: operator=(next);
    }
    //std::cout << "Ice copy assigment operator called" << std::endl;
    return (*this);
}

Ice :: ~Ice()
{
    //std::cout << "Ice destructor called !!!" << std::endl;
}

void Ice :: use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice :: clone() const
{
    Ice *clone = new Ice(*this);
    return(clone);
}
