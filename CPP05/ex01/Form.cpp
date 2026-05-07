#include "Form.hpp"

Form :: Form() : form_name("contract"), grade_to_sign(4), grade_to_execute(5)
{
	this->is_signed = false;
}

Form :: Form(std::string name, const int sign_grade, const int execute_grade)
				: form_name(name), grade_to_sign(sign_grade), grade_to_execute(execute_grade)
{
	if (grade_to_sign > LOWEST_GRADE || grade_to_execute > LOWEST_GRADE)
		throw Form::GradeTooLowException();
	else if (grade_to_sign < HIGHEST_GRADE || grade_to_execute < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
}	

Form :: Form(const Form &next) : form_name(next.form_name), grade_to_sign(next.grade_to_sign),
								grade_to_execute(next.grade_to_execute)
{
	this->is_signed = next.is_signed;
}

Form &Form :: operator=(const Form &next)
{
	if (this != &next)
		this->is_signed = next.is_signed;
	return (*this);
}

Form :: ~Form() {}

std::string Form :: getName() const
{
	return (this->form_name);
}

bool Form :: is_it_signed()
{
	return (this->is_signed);
}

void Form :: beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_to_sign)
		throw Form::GradeTooLowException();

	this->is_signed = true;
}

int Form :: get_grade_to_sign() const
{
	return (this->grade_to_sign);
}

int Form :: get_grade_to_execute() const
{
	return (this->grade_to_execute);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low.");
}

std::ostream& operator<<(std::ostream &os, Form &next)
{
	os << "Form name: " << next.getName() << "\nIs signed: " << next.is_it_signed() << "\nGrade to Sign: "<<
		next.get_grade_to_sign() << "\nGrade to Execute: " << next.get_grade_to_execute() << std::endl; 

	return (os);
}