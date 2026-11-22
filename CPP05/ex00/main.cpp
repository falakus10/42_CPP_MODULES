#include "Bureaucrat.hpp"

int main()
{
	std::cout << "---------------- Bureacrat -----------------" << std::endl;

	Bureaucrat a;
	Bureaucrat b("Taha", 1);
	Bureaucrat c("Umut", 150);
	std::cout << "---------------- TRY -----------------" << std::endl;

	try
	{
		a.setGrade(-3);
	}
	catch (Bureaucrat :: GradeTooHighException &message)
	{
		std::cout << "Can't set grade of " << a.getName() << " " << message.what() << std::endl;
	}
	catch (Bureaucrat :: GradeTooLowException &message)
	{
		std::cout <<"Can't set grade of " << a.getName() << " " << message.what() << std::endl;
	}

	try
	{
		b.incrementGrade();
	}
	catch (Bureaucrat :: GradeTooHighException &message)
	{
		std::cout <<"Can't increment grade of " << b.getName() << " " << message.what() << std::endl;
	}

	try
	{
		c.decrementGrade();
	}
	catch (Bureaucrat :: GradeTooLowException &message)
	{
		std::cout <<"Can't decrement grade of " << c.getName() << " " << message.what() << std::endl;
	}
	std::cout << "---------------- DESTRUCTORS -----------------" << std::endl;

	return (0);
}
