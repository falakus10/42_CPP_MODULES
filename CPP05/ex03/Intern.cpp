#include "Intern.hpp"

Intern :: Intern() {}

Intern :: Intern(const Intern &next)
{
	(void)next;
}

Intern& Intern :: operator=(const Intern &next)
{
	(void)next;
	return (*this);
}

Intern :: ~Intern() {}

static AForm	*createShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm	*createRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*createPresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern :: makeForm(const std::string &form_name, const std::string &target)
{
	std::string form_names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (*form_creators[3])(std::string) = {createShrubberyCreationForm, createRobotomyRequestForm, createPresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (form_name == form_names[i])
		{
			std::cout << "Intern creates " << form_name << " form." << std::endl;
			return form_creators[i](target);
		}
	}
	std::cout << "Intern cannot create " << form_name << " form because it is unknown." << std::endl;
	return (NULL);
}
