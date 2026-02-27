#include "../includes/MateriaSource.hpp"

MateriaSource :: MateriaSource()
{
    for(int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource :: MateriaSource(MateriaSource const &next)
{
    for (int i = 0; i < 4; i++)
    {
        if (next.materia[i])
            materia[i] = next.materia[i]->clone();
        else
            materia[i] = NULL;
    }
}

MateriaSource &MateriaSource :: operator=(MateriaSource const &next)
{
    if (this != &next)
    {
        for (int i = 0; i < 4; i++)
        {
            delete materia[i];
            materia[i] = NULL;
            if (next.materia[i])
                materia[i] = next.materia[i]->clone();
            else
                materia[i] = NULL;
        }
    }
    return (*this);
}

MateriaSource :: ~MateriaSource()
{
    for(int i = 0; i < 4; i++)
        delete materia[i];
}

void MateriaSource :: learnMateria(AMateria *m)
{
    if (!m)
        return ;
    int i = 0;
    while (i < 4)
    {
        if (!materia[i])
        {
            materia[i] = m;
            break;
        }
        i++;
    }
}

AMateria *MateriaSource :: createMateria(std::string const &type)
{
    for(int i = 0; i < 4; i++)
    {
        if (materia[i] && materia[i]->getType() == type)
            return(materia[i]->clone());
    }
    return (NULL);
}