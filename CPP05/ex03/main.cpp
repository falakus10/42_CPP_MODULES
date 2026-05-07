#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main()
{
	Bureaucrat bureaucrat("John Doe", 1);
	Intern intern;

	AForm* shrubbery = intern.makeForm("shrubbery creation", "home");
	AForm* robotomy = intern.makeForm("robotomy request", "Bender");
	AForm* pardon = intern.makeForm("presidential pardon", "Alice");
	AForm* unknown = intern.makeForm("unknown form", "target");

	try
	{
		if (shrubbery)
		{
			shrubbery->beSigned(bureaucrat);
			shrubbery->execute(bureaucrat);
			delete shrubbery;
		}

		if (robotomy)
		{
			robotomy->beSigned(bureaucrat);
			robotomy->execute(bureaucrat);
			delete robotomy;
		}

		if (pardon)
		{
			pardon->beSigned(bureaucrat);
			pardon->execute(bureaucrat);
			delete pardon;
		}

		if (unknown)
			delete unknown;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}