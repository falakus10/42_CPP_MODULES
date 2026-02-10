#include "../includes/Dog.hpp"

Dog :: Dog() : Animal("Dog")
{
	dog_brain = new Brain;
	std::cout << "Dog default constructor called !!!" << std::endl;
}

Dog :: Dog(std::string type) : Animal(type)
{
	dog_brain = new Brain;
	std::cout << "Dog string constructor called !!!" << std::endl;
}

Dog :: Dog(const Dog &next) : Animal(next)
{
	dog_brain = new Brain(*next.dog_brain);
	std::cout << "Dog copy constructor called !!!" << std::endl;
}

Dog &Dog :: operator=(const Dog &next)
{
    if (this != &next)
    {
        Animal::operator=(next);
        delete dog_brain;
        dog_brain = new Brain(*next.dog_brain);
    }
    std::cout << "Dog copy assignment operator called !!!" << std::endl;
    return (*this);
}

Dog :: ~Dog()
{
	delete dog_brain;
	std::cout << "Dog destructor called !!!" <<std::endl;
}

void Dog :: makeSound() const
{
	std::cout << "Baarrrkk Barrrkkk" <<std::endl;
}

std::string Dog :: getIdea(int index) const
{
	return(dog_brain->getIdea(index));
}

void Dog :: setIdea(std::string ideas, int index)
{
	dog_brain->setIdea(ideas, index);
}