#include "AForm.hpp"

AForm :: AForm() : form_name("contract"), grade_to_sign(4), grade_to_execute(5)
{
	this->is_signed = false;
}

AForm :: AForm(std::string name, const int sign_grade, const int execute_grade)
				: form_name(name), grade_to_sign(sign_grade), grade_to_execute(execute_grade)
{
	if (grade_to_sign > LOWEST_GRADE || grade_to_execute > LOWEST_GRADE)
		throw AForm::GradeTooLowException();
	else if (grade_to_sign < HIGHEST_GRADE || grade_to_execute < HIGHEST_GRADE)
		throw AForm::GradeTooHighException();
}	

AForm :: AForm(const AForm &next) : form_name(next.form_name), grade_to_sign(next.grade_to_sign),
								grade_to_execute(next.grade_to_execute)
{
	this->is_signed = next.is_signed;
}

AForm &AForm :: operator=(const AForm &next)
{
	if (this != &next)
		this->is_signed = next.is_signed;
	return (*this);
}

AForm :: ~AForm() {}

std::string AForm :: getName() const
{
	return (this->form_name);
}

bool AForm :: is_it_signed() const
{
	return (this->is_signed);
}

void AForm :: beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_to_sign)
		throw AForm::GradeTooLowException();

	this->is_signed = true;
}

int AForm :: get_grade_to_sign() const
{
	return (this->grade_to_sign);
}

int AForm :: get_grade_to_execute() const
{
	return (this->grade_to_execute);
}

void AForm :: execute(const Bureaucrat &bureaucrat) const
{
	if (!this->is_signed)
		throw AForm::FormNotSignedException();
	else if (bureaucrat.getGrade() > this->grade_to_execute)
		throw AForm::GradeTooLowException();
}

const char* AForm:: FormNotSignedException::what() const throw()
{
	return ("Form is not signed.");
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low.");
}


std::ostream& operator<<(std::ostream &os, AForm &next)
{
	os << "AForm name: " << next.getName() << "\nIs signed: " << next.is_it_signed() << "\nGrade to Sign: "<<
		next.get_grade_to_sign() << "\nGrade to Execute: " << next.get_grade_to_execute() << std::endl; 

	return (os);
}