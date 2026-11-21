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

	if (shrubbery)
	{
		bureaucrat.signForm(*shrubbery);
		bureaucrat.executeForm(*shrubbery);
		delete shrubbery;
	}

	if (robotomy)
	{
		bureaucrat.signForm(*robotomy);
		bureaucrat.executeForm(*robotomy);
		delete robotomy;
	}

	if (pardon)
	{
		bureaucrat.signForm(*pardon);
		bureaucrat.executeForm(*pardon);
		delete pardon;
	}

	delete unknown;

	return 0;
}
