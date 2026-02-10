#include "../includes/Brain.hpp"

Brain :: Brain()
{
	std::cout << "Brain default constructor called !!!" << std::endl;
}

Brain :: Brain(const Brain &next) : ideas(next.ideas)
{
	std::cout << "Brain Copy constructor called !!!" << std::endl;
}

Brain &Brain :: operator=(const Brain &next)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = next.ideas[i];
	}
	std::cout << "Brain copy assigment operator called !!!" << std::endl;
	return (*this);
}

Brain :: ~Brain()
{
	std::cout << "Brain destructor called !!!" << std::endl;
}

void Brain :: setIdea(std::string ideas, int index)
{
	this->ideas[index] = ideas;
}

std::string Brain :: getIdea(int index) const
{
	return(this->ideas[index]);
}
