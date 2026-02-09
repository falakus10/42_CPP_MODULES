#include "Brain.hpp"

Brain :: Brain()
{
	std::cout << "Brain default constructor called !!!" << std::endl;
}

Brain :: Brain(const Brain &next)
{
	*this = next;
	std::cout << "Brain Copy constructor called !!!" << std::endl;
}

Brain &Brain :: operator=(const Brain &next)
{
	for (int i = 0; i < 100; i++)
	{
		idea[i] = next.idea[i];
	}
	std::cout << "Brain copy assigment operator called !!!" << std::endl;
	return (*this);
}

Brain :: ~Brain()
{
	std::cout << "Brain destructor called !!!" << std::endl;
}

void Brain :: setIdea(std::string idea, int index) const
{
	this->idea[index] = idea;
}

std::string Brain :: getIdea(int index) const
{
	return(this->idea[index]);
}
