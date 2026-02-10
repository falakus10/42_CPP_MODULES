#include "../includes/Cat.hpp"

Cat :: Cat() : Animal("Cat")
{
	cat_brain = new Brain;
	std::cout << "Cat default constructor called !!!" << std::endl;
}

Cat :: Cat(std::string type) : Animal(type)
{
	cat_brain = new Brain;
	std::cout << "Cat string constructor called !!!" << std::endl;
}

Cat :: Cat(const Cat &next) : Animal(next)
{
	cat_brain = new Brain(*next.cat_brain);
	std::cout << "Cat copy constructor called !!!" << std::endl;
}

Cat &Cat :: operator=(const Cat &next)
{
    if (this != &next)
    {
        Animal::operator=(next);
        delete cat_brain;
        cat_brain = new Brain(*next.cat_brain);
    }
    std::cout << "Cat copy assignment operator called !!!" << std::endl;
    return (*this);
}

Cat :: ~Cat()
{
	delete cat_brain;
	std::cout << "Cat destructor called !!!" <<std::endl;
}

void Cat :: makeSound() const
{
	std::cout << "Meeeooooowwwww" <<std::endl;
}

std::string Cat :: getIdea(int index) const
{
	return(cat_brain->getIdea(index));
}

void Cat :: setIdea(std::string ideas, int index)
{
	cat_brain->setIdea(ideas, index);
}