#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;
	Bureaucrat b("Taha", 1);
	Bureaucrat c("Umut", 150);

	try
	{
		a.setGrade(-3);
	}
	catch (Bureaucrat :: GradeTooHighException &message)
	{
		std::cerr << "Can't set grade of " << a.getName() << " " << message.what() << std::endl;
	}
	catch (Bureaucrat :: GradeTooLowException &message)
	{
		std::cerr <<"Can't set grade of " << a.getName() << " " << message.what() << std::endl;
	}

	try
	{
		b.incrementGrade();
	}
	catch (Bureaucrat :: GradeTooHighException &message)
	{
		std::cerr <<"Can't increment grade of " << b.getName() << " " << message.what() << std::endl;
	}

	try
	{
		c.decrementGrade();
	}
	catch (Bureaucrat :: GradeTooLowException &message)
	{
		std::cerr <<"Can't decrement grade of " << c.getName() << " " << message.what() << std::endl;
	}

	return (0);
}
