#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &next);
		Intern& operator=(const Intern &next);
		~Intern();
		AForm* makeForm(const std::string &form_name, const std::string &target);
};

#endif