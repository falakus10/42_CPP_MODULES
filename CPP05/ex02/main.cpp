#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	Bureaucrat bureaucrat("John Doe", 1);
	ShrubberyCreationForm shrubbery("home");
	RobotomyRequestForm robotomy("Bender");
	PresidentialPardonForm pardon("Alice");

	try
	{
		shrubbery.beSigned(bureaucrat);
		shrubbery.execute(bureaucrat);

		robotomy.beSigned(bureaucrat);
		robotomy.execute(bureaucrat);

		pardon.beSigned(bureaucrat);
		pardon.execute(bureaucrat);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}