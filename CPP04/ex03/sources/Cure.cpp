#include "../includes/Cure.hpp"

Cure :: Cure() : AMateria("cure")
{
    //std::cout << "Cure default constructor called !!!" << std::endl;
}

Cure :: Cure(std::string const &type) : AMateria(type)
{
    //std::cout << "Cure string constructor called !!!" << std::endl;
}

Cure :: Cure(Cure const &next) : AMateria(next)
{
    //std::cout << "Cure copy constructor called !!!" << std::endl;
}

Cure &Cure :: operator=(Cure const &next)
{
    if (this != &next)
    {
        AMateria :: operator=(next);
    }
    //std::cout << "Cure copy assigment operator called" << std::endl;
    return (*this);
}

Cure :: ~Cure()
{
    //std::cout << "Cure destructor called !!!" << std::endl;
}

void Cure :: use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" <<std::endl;
}

AMateria *Cure :: clone() const
{
    Cure *clone = new Cure(*this);
    return(clone);
}