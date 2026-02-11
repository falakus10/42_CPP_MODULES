#include "../includes/Character.hpp"

Character :: Character() : _name("undefinied")
{
    for(int i = 0; i < 4; i++)
        materia[i] = NULL;
}

Character :: Character(std::string const &name) : _name(name)
{
    for(int i = 0; i < 4; i++)
        materia[i] = NULL;
}

Character :: Character(Character const &next) : ICharacter(next), _name(next._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (next.materia[i])
            materia[i] = next.materia[i]->clone();
        else
            materia[i] = NULL;
    }
}

Character &Character :: operator=(Character const &next)
{
    if (this != &next)
    {
        _name = next._name;
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

Character :: ~Character()
{
    for (int i = 0; i < 4; i++)
        delete materia[i];
}

std::string const &Character :: getName() const
{
    return (_name);
}

void Character :: equip(AMateria *m)
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

void Character :: unequip(int idx)
{
    AMateria *tmp;
    
    if (idx < 4 && idx >= 0)
    {

        if (materia[idx])
        {
            tmp = materia[idx];
            materia[idx] = NULL;
        }
    }
}

void Character :: use(int idx, ICharacter &target)
{
    if (idx < 4 && idx >= 0)
    {
        if (materia[idx])
            materia[idx]->use(target);
    }
}