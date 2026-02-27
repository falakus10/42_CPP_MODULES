#include "Bureaucrat.hpp"

Bureaucrat :: Bureaucrat()
{
	_name = "James Gordon";
	_grade = 3;
	std::cout << "Default constructor called !!!" << std::endl;
}

Bureaucrat :: Bureaucrat(std::string name, int grade)
{
	if (grade < 1 || grade > 150)
	{
		std::cout << "Grade should be between 1-150" << std::endl;
		return ;
	}
	_name = name;
	_grade = grade;
	std::cout << "Parameter constructor called !!!" << std::endl;
}

Bureaucrat :: Bureaucrat(const Bureaucrat &next)
{
	this->_name = next._name;
	this->_grade = next._grade;
	std::cout << "Copy constructor called !!!" << std::endl;
}

Bureaucrat &Bureaucrat :: operator=(const Bureaucrat &next)
{
	if (this != &next)
	{
		this->_name = next._name;
		this->_grade = next._grade;
	}
	std::cout << "Copy assigment operator called !!!" << std::endl;
	return (*this);
}

Bureaucrat :: ~Bureaucrat()
{
	std::cout << "Destructor called !!!" << std::endl;
}

std::string Bureaucrat :: getName()
{
	return(this->_name);
}
int Bureaucrat :: getGrade()
{
	return(this->_grade);
}

void Bureaucrat :: setName(std::string name)
{
	this->_name = name;
}

void Bureaucrat :: setGrade(int grade)
{

}


