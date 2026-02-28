#include "Bureaucrat.hpp"

Bureaucrat :: Bureaucrat() : _name("James Gordon"), _grade(3)
{
	std::cout << "Default constructor called !!!" << std::endl;
}

Bureaucrat :: Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1 || grade > 150)
	{
		std::cout << "Grade should be between 1-150" << std::endl;
		return ;
	}
	std::cout << "Parameter constructor called !!!" << std::endl;
}

Bureaucrat :: Bureaucrat(const Bureaucrat &next)  : _name(next._name), _grade(next._grade)
{
	std::cout << "Copy constructor called !!!" << std::endl;
}

Bureaucrat &Bureaucrat :: operator=(const Bureaucrat &next)
{
	if (this != &next)
		this->_grade = next._grade;

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

void Bureaucrat :: setGrade(int grade)
{
	this->_grade = grade;
}

void Bureaucrat :: incrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
	std::cout << "Grade incrementation is successful" << std::endl;
}

void Bureaucrat :: decrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
	std::cout << "Grade decrementation is successful" << std::endl;
}

const char *Bureaucrat :: GradeTooHighException :: what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat :: GradeTooLowException :: what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &next)
{
	os << next.getName() << "Bureacrat grade is" << next.getGrade() << std::endl;
	return (os);
}

