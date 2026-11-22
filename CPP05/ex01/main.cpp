#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	Bureaucrat a;
	Bureaucrat b("Taha", 1);
	Bureaucrat c("Umut", 150);
	Form	f1;
	Form	f2("rent_contract", 23, 21);


	std::cout << "---------------- Bureacrat -----------------" << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << "----------------   Form    -----------------" << std::endl;
	std::cout << f1;
	std::cout << f2;


	std::cout << "----------------   TRY    -----------------" << std::endl;

	try
	{
		c.signForm(f1);
	}
	catch (Form :: GradeTooHighException &message)
	{
		std::cout << c.getName() <<" Can't sign "  << f1.getName() << " " << message.what() << std::endl;
	}

	try
	{
		b.signForm(f2);
	}
	catch (Form :: GradeTooHighException &message)
	{
		std::cout << b.getName() <<" Can't sign "  << f2.getName() << " " << message.what() << std::endl;
	}

	std::cout << "----------------   DESTRUCTORS    -----------------" << std::endl;


	return (0);
}
