#include "Bureaucrat.hpp"

Bureaucrat :: Bureaucrat() : _name("James Gordon"), _grade(3)
{
	std::cout << "Default constructor called !!!" << std::endl;
}

Bureaucrat :: Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < HIGHEST_GRADE)
	{
		std::cout << "ne alakaaa" <<std::endl;
		throw GradeTooHighException();
	}
	else if (grade > LOWEST_GRADE)
		throw GradeTooLowException();
	else
		_grade = grade;
	std::cout << "Parameter constructor called !!!" << std::endl;
}

Bureaucrat :: Bureaucrat(const Bureaucrat &next) : _name(next._name), _grade(next._grade)
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

std::string Bureaucrat :: getName() const
{
	return(this->_name);
}
int Bureaucrat :: getGrade() const
{
	return(this->_grade);
}

void Bureaucrat :: setGrade(int grade)
{
	if (grade < HIGHEST_GRADE)
		throw GradeTooHighException();
	else if (grade > LOWEST_GRADE)
		throw GradeTooLowException();
	else
		_grade = grade;
}

void Bureaucrat :: incrementGrade()
{
	if (this->_grade == HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
	std::cout << "Grade incrementation is successful" << std::endl;
}

void Bureaucrat :: decrementGrade()
{
	if (this->_grade == LOWEST_GRADE)
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

std::ostream& operator<<(std::ostream &os, const Bureaucrat &next)
{
    os << next.getName() << ", bureaucrat grade " << next.getGrade();
    return os;
}
