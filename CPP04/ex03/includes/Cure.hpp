#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string const &type);
        Cure(Cure const &next);
        Cure &operator=(Cure const &next);
        ~Cure();
        void use(ICharacter& target);
        AMateria* clone() const;  
};

#endif
