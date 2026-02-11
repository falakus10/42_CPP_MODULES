#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &next);
        MateriaSource &operator=(MateriaSource const &next);
        ~MateriaSource();
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const &type);
};

#endif