#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const &type);
        Ice(Ice const &next);
        Ice &operator=(Ice const &next);
        ~Ice();
        void use(ICharacter& target);
        AMateria* clone() const; 
};

#endif
